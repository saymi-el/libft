/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-maar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 14:32:40 by sel-maar          #+#    #+#             */
/*   Updated: 2022/05/09 16:46:07 by sel-maar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char	*ft_strrchr(const char *s, int c)
{
	int			i;
	const char	*pt;

	i = 0;
	if (c > 256)
		c %= 256;
	while (s[i])
		i++;
	while (i >= 0)
	{
		if (s[i] == c)
		{
			pt = &s[i];
			return ((char *)pt);
		}
		i--;
	}
	return (0);
}

/*int	main()
{
 	char s[6] = "babar";
 	printf("%s\n", strrchr(s, 'a'));
 	printf("%s", ft_strrchr(s, 'a'));
 	return (0);
}*/
