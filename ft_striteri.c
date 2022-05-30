/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-maar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 18:21:50 by sel-maar          #+#    #+#             */
/*   Updated: 2022/05/23 18:21:37 by sel-maar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	int unsigned	i;

	i = 0;
	while (*s)
	{
		f(i, s);
		s++;
		i++;
	}
}

/*int	main()
{
	char s[5] = "abc1";
	printf("%s\n", s);
	ft_striteri(s, f);
	printf("%s", s);
	return (0);
}*/
