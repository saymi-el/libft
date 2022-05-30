/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-maar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 10:37:25 by sel-maar          #+#    #+#             */
/*   Updated: 2022/05/12 18:19:33 by sel-maar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*tmps1;
	unsigned char	*tmps2;

	i = 0;
	tmps1 = (void *)s1;
	tmps2 = (void *)s2;
	if (n == 0)
		return (0);
	while (i < n)
	{
		if (tmps1[i] != tmps2[i])
			return (tmps1[i] - tmps2[i]);
		i++;
	}
	i--;
	return (tmps1[i] - tmps2[i]);
}

/*int main()
{
	char s1[] = "abcdefgxyz";
	char s2[] = "abcdefgyid";
	size_t size = sizeof(char);

	printf("%d\n", memcmp(s1, s2, size * 7));
	printf("%d", ft_memcmp(s1, s2, size * 7));
	return (0);
}*/
