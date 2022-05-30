/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-maar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 09:23:34 by sel-maar          #+#    #+#             */
/*   Updated: 2022/05/12 12:44:01 by sel-maar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>

int	ft_isalpha(int c)
{
	if ((c <= 'z' && c >= 'a') || (c <= 'Z' && c >= 'A'))
		return (1024);
	return (0);
}

/*int main(int argc, char **argv)
{
	printf("%d\n", isalpha(argv[1][0]));
	printf("%d", ft_isalpha(argv[1][0]));
	return (0);
}*/
