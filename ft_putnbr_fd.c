/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-maar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/13 08:51:55 by sel-maar          #+#    #+#             */
/*   Updated: 2022/03/17 16:24:55 by sel-maar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

static	void	ft_putchar(char c, int fd)
{
	write(fd, &c, 1);
}

void	ft_putnbr_fd(int n, int fd)
{
	long	max_nbr;

	max_nbr = n;
	if (max_nbr < 0)
	{
		ft_putchar('-', fd);
		max_nbr *= -1;
	}
	if (max_nbr > 9)
		ft_putnbr_fd(max_nbr / 10, fd);
	ft_putchar(max_nbr % 10 + '0', fd);
}
/*
int	main(void)
{
	write(1, "42:", 3);
	ft_putnbr(42);
	write(1, "\n", 1);
	write(1, "10:", 3);
        ft_putnbr(10);
        write(1, "\n", 1);
	write(1, "0:", 3);
        ft_putnbr(0);
        write(1, "\n", 1);

	write(1, "-42:", 3);
        ft_putnbr(-42);
        write(1, "\n", 1);
	write(1, "-1:", 3);
	ft_putnbr(-1);
        write(1, "\n", 1);
	write(1, "max:", 4);
        ft_putnbr(2147483647);
        write(1, "\n", 1);
	write(1, "min:", 4);
        ft_putnbr(-2147483648);
        write(1, "\n", 1);
}*/
