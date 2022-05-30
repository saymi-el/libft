/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_splitbon.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-maar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 15:17:59 by sel-maar          #+#    #+#             */
/*   Updated: 2022/05/19 15:57:52 by sel-maar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	nbword(const char *s, char c)
{
	int	i;
	int	nbword;

	i = 0;
	nbword = 0;
	while (s[i])
	{
		if (s[i] != c && s[i])
		{
			while (s[i] != c && s[i])
				i++;
			nbword++;
		}
		while (s[i] == c && s[i])
			i++;
	}
	return (nbword);
}

char	**ft_split(const char *s, char c)
{
	char	**result;
	int		i;
	int		j;
	int		k;

	result = malloc (sizeof(char *) * (nbword(s, c) + 1));
	if (!result)
		return (NULL);
	i = 0;
	j = 0;
	k = 0;
	while (k < nbword(s, c))
	{
		while (s[i] && s[i] == c)
			i++;
		while (s[i] && s[i] != c)
		{
			i++;
			j++;
		}
		result[k++] = ft_substr(s, i - j, j);
		j = 0;
	}
	result[k] = NULL;
	return (result);
}

/*int	main()
{
	char **result = ft_split("je m'appelle danny le puissant    ", ' ');
	int i = 0;
	printf("%d\n",nbword("je m'appelle danny le puissant    ", ' '));
	while (i < nbword("je m'appelle danny le puissant    ", ' '))
	{
		printf("%s\n", result[i]);
		i++;
	}
	return (0);
}*/
