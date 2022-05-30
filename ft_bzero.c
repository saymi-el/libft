/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-maar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 11:12:59 by sel-maar          #+#    #+#             */
/*   Updated: 2022/05/23 17:51:11 by sel-maar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	i;
	char	*s2;

	i = 0;
	s2 = s;
	while (i < n)
	{
		s2[i] = 0;
		i++;
	}
}

/*int	main()
{
	char tab[15] = "babarlelephant";
	size_t size = sizeof(char);

	printf("%s\n", tab);
	ft_bzero(tab + 4, size * 5);
	printf("%s\n", tab);
	bzero(tab + 2, size * 8);
	printf("%s\n", tab);
	return (0);
}*/
