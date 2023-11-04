/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejango <alejango@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/11 09:19:13 by alejango          #+#    #+#             */
/*   Updated: 2023/08/16 12:14:40 by alejango         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	int	digit;
	int	divisor;

	divisor = 1;
	if (nb == -2147483648)
	{
		ft_putchar('-');
		ft_putchar('2');
		nb = 147483648;
	}
	else if (nb < 0)
	{
		ft_putchar('-');
		nb *= -1;
	}
	while (nb / divisor >= 10)
		divisor *= 10;
	while (divisor > 0)
	{
		digit = nb / divisor;
		ft_putchar('0' + digit);
		nb %= divisor;
		divisor /= 10;
	}
}
