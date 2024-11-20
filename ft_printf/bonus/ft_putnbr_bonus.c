/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssbaytri <ssbaytri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 23:12:59 by ssbaytri          #+#    #+#             */
/*   Updated: 2024/11/18 17:06:16 by ssbaytri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf_bonus.h"

static int	putnbr_recursive(long n)
{
	int	count;

	count = 0;
	if (n >= 10)
		count += putnbr_recursive(n / 10);
	count += ft_putchar_bonus(n % 10 + '0');
	return (count);
}

int	ft_putnbr_bonus(int n, t_flags flags)
{
	int		count;
	long	num;

	count = 0;
	num = n;
	if (n >= 0)
	{
		if (flags.plus)
			count += ft_putchar_bonus('+');
		else if (flags.space)
			count += ft_putchar_bonus(' ');
	}
	if (num < 0)
	{
		count += ft_putchar_bonus('-');
		num = -num;
	}
	count += putnbr_recursive(num);
	return (count);
}
