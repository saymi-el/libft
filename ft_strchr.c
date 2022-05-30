/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-maar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 14:32:40 by sel-maar          #+#    #+#             */
/*   Updated: 2022/05/09 16:29:04 by sel-maar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char	*ft_strchr(const char *s, int c)
{
	int			i;
	const char	*pt;

	i = 0;
	if (c > 256)
		c %= 256;
	while (s[i])
	{
		if (s[i] == c)
		{
			pt = &s[i];
			return ((char *)pt);
		}
		i++;
	}
	if (s[i] == c)
	{
		pt = &s[i];
		return ((char *)pt);
	}
	return (0);
}

/*int	main()
{
 	char s[6] = "babar";
 	//printf("%s\n", strchr(s, 'q'));
 	printf("%s", ft_strchr(s, 'q'));
 	return (0);
}*/
