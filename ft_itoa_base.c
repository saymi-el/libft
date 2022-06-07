/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-maar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 14:34:09 by sel-maar          #+#    #+#             */
/*   Updated: 2022/06/07 16:28:30 by sel-maar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

static char	convertbase(unsigned long long int n, char *base)
{
	unsigned long long int	i;

	i = 0;
	while (base[i])
	{
		if (n == i)
			return (base[i]);
		i++;
	}
	return (-1);
}

static int	ft_lennb(unsigned long long int n, unsigned long long int lenbase)
{
	unsigned long long int	i;

	i = 1;
	while (n > lenbase - 1)
	{
		n /= lenbase;
		i++;
	}
	return (i);
}

char	*ft_itoa_base(unsigned long long int n, char *base)
{
	unsigned long long int	lenbase;
	int						lennb;
	char					*result;

	lenbase = ft_strlen(base);
	lennb = ft_lennb(n, lenbase);
	result = ft_calloc(sizeof(char), lennb);
	while (lennb-- >= 0)
	{
		result[lennb] = convertbase(n % lenbase, base);
		n /= lenbase;
	}
	return (result);
}

/*int main()
{
	printf("%s", ft_itoa_base(85524, "andre"));
	return (0);
}*/
