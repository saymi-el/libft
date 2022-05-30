/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-maar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 14:01:06 by sel-maar          #+#    #+#             */
/*   Updated: 2022/05/09 14:23:20 by sel-maar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>

int	ft_toupper(int c)
{
	int	*pt;

	pt = &c;
	if (c >= 'a' && c <= 'z')
		*pt -= 32;
	return (c);
}

/*int	main()
{
	char s[6] = "/Abar";
	printf("%s\n", s);
	printf("%d\n", toupper(s[0]));
	printf("%s\n", s);
	printf("%d\n", ft_toupper(s[0]));
	printf("%s\n", s);
	
	return (0);
}*/
