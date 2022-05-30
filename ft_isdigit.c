/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-maar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 09:44:07 by sel-maar          #+#    #+#             */
/*   Updated: 2022/05/09 09:51:03 by sel-maar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (2048);
	return (0);
}

/*int	main(int argc, char **argv)
{
	printf("%d\n", isdigit(argv[1][0]));
	printf("%d", ft_isdigit(argv[1][0]));
	return (0);
}*/
