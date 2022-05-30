/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-maar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 18:43:10 by sel-maar          #+#    #+#             */
/*   Updated: 2022/05/12 12:51:47 by sel-maar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	unsigned int	i;

	i = 0;
	while (size != 0 && i < size - 1 && src[i] != '\0')
	{
		dest[i] = src[i];
		++i;
	}
	if (i < size)
	{
		dest[i] = 0;
	}
	while (src[i] != '\0')
	{
		++i;
	}
	return (i);
}

/*#include <bsd/string.h>
#include <stdio.h>
int main()
{
	char dest[] = "dfdbgfgfsd";
	char src[] = "abcde";
	int size = 3;
	printf("%d\n",ft_strlcpy(dest, src, size));
	printf("%d",strlcpy(dest, src, size));
	return (0);
}*/
