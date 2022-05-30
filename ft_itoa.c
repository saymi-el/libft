/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-maar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 09:40:42 by sel-maar          #+#    #+#             */
/*   Updated: 2022/05/12 14:33:51 by sel-maar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

static	void	ft_putstr(int lennb, int n, int k, char *result)
{
	int	i;

	i = 0;
	if (n < 0)
	{
		result[i] = '-';
		n *= -1;
		i++;
	}
	while (i < lennb - 1)
	{
		result[i] = n / k + 48;
		n %= k;
		k /= 10;
		i++;
	}
	result[i] = '\0';
}

static	int	ft_lennb(int n)
{
	int	nbc;

	nbc = 2;
	if (n < 0)
		nbc++;
	while (n < -9 || n > 9)
	{
		n /= 10;
		nbc++;
	}
	return (nbc);
}

static	int	kvalue(int n)
{
	int	k;

	k = 1;
	while (n < -9 || n > 9)
	{
		n /= 10;
		k *= 10;
	}
	return (k);
}

char	*ft_itoa(int n)
{
	int		lennb;
	char	*result;
	int		k;

	lennb = ft_lennb(n);
	if (n == 0)
	{
		result = malloc((sizeof(char) * 2));
		result[0] = '0';
		result[1] = '\0';
		return (result);
	}
	result = malloc(sizeof(char) * lennb);
	k = kvalue(n);
	if (n == -2147483648)
	{
		n++;
		ft_putstr(lennb, n, k, result);
		result[10] = '8';
	}
	else
		ft_putstr(lennb, n, k, result);
	return (result);
}

/*int	main(void)
{
	int a;
	char *moinstreize = ft_itoa(0);
	printf("%s\n", moinstreize);
	moinstreize[2] = '4';
	printf("%s", moinstreize);
	return (0);
}*/
