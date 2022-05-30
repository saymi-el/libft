/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-maar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 09:39:58 by sel-maar          #+#    #+#             */
/*   Updated: 2022/05/14 15:44:30 by sel-maar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*ptr;
	size_t			i;

	ptr = (void *)s;
	c = (unsigned char)c;
	i = 0;
	if (c > 256)
		c %= 256;
	while (i < n)
	{
		if (ptr[i] == c)
			return (ptr + i);
		i++;
	}
	return (0);
}

/*int	main()
{
	int s[7] = {-49, 49, 1, -1, 0, -2, 2};
	size_t size = sizeof(char);
	printf("%s\n", (char *)ft_memchr(s, -1, 7));
	printf("%s\n", (char *)memchr(s,-1,  7));
	return (0);
}*/
