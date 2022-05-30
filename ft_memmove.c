/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-maar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 11:48:35 by sel-maar          #+#    #+#             */
/*   Updated: 2022/05/24 15:21:11 by sel-maar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char		*tmp;
	const char	*tmp2;
	size_t		i;

	tmp = dest;
	tmp2 = src;
	i = 0;
	if (tmp < tmp2)
	{
		while (i < n)
		{
			tmp[i] = tmp2[i];
			i++;
		}
	}
	else
	{
		i = n - 1;
		while ((int)i >= 0)
		{
			tmp[i] = tmp2[i];
			i--;
		}
	}
	return (dest);
}

/*int	main()
{
	char src[] = "lorem ipsum dolor sit amet";
	char *dest = src + 1;
	size_t size = sizeof(char);

	printf("%s\n", dest);
	memmove(dest, src, size * 88);
	printf("og |%s", dest);
	ft_memmove(dest, src, size * 8);
	printf("ft |%s\n", dest);
	return (0);
}*/
