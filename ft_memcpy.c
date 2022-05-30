/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-maar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 11:30:03 by sel-maar          #+#    #+#             */
/*   Updated: 2022/05/12 18:12:38 by sel-maar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char		*tmp;
	const char	*tmp2;
	size_t		i;

	tmp = dest;
	tmp2 = src;
	i = 0;
	while (i < n)
	{
		tmp[i] = tmp2[i];
		i++;
	}
	return (dest);
}

/*int	main()
{
	char src[6] = "hihih";
	char dest[6] = "babar";
	size_t size = sizeof(char);

	printf("%s\n", dest);
	memcpy(dest, src, size * 3);
	printf("%s\n", dest);
	ft_memcpy(dest, src, size * 5);
	printf("%s\n", src);	
	return (0);
}*/
