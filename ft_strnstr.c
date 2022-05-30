/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-maar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 11:41:49 by sel-maar          #+#    #+#             */
/*   Updated: 2022/05/24 16:11:35 by sel-maar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	s;
	size_t	i;
	char	*bigbig;
	char	*lite;

	i = 0;
	bigbig = (char *)big;
	lite = (char *)little;
	if (lite[i] == 0)
		return (bigbig);
	while (bigbig[i] != '\0')
	{
		s = 0;
		while (bigbig[i + s] == lite[s] && i + s < len
			&& bigbig[i + s] && lite[s])
		{
			s++;
			if (lite[s] == '\0')
				return (&bigbig[i]);
		}
		i++;
	}
	return (NULL);
}

/*int	main()
{
	const char largestring[] = "lorem ipsum dolor sit amet";
	const char smallstring[] = "dolor";
	size_t size = sizeof(char);

	printf("%s", ft_strnstr(largestring, smallstring, size * 0));
	return (0);
}*/
