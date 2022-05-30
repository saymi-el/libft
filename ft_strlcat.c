/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-maar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 10:59:47 by sel-maar          #+#    #+#             */
/*   Updated: 2022/05/24 19:55:27 by sel-maar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <bsd/string.h>

static	unsigned int	calcul_length(const char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	int				i;
	unsigned int	j;
	unsigned int	len_dest;
	unsigned int	len_src;

	len_dest = calcul_length(dest);
	len_src = calcul_length(src);
	i = 0;
	j = 0;
	while (dest[i])
		i++;
	if (size <= len_dest || size == 0)
		return (len_src + size);
	if (size > (len_dest + len_src))
		size = (len_dest + len_src + 1);
	while (j < (size - len_dest - 1))
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (len_dest + len_src);
}
/*#include <stdio.h>
int	main(void)
{
	char dest[] = "rrrrrrrrrrrrrrrr";
	char src[] = "lorem ipsum dolor sit amet";
	printf("%ld", ft_strlcat(dest, src, 5));
	printf("%s", dest);
	return (0);
}*/
