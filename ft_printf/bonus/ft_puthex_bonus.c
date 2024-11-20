/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssbaytri <ssbaytri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 22:51:11 by ssbaytri          #+#    #+#             */
/*   Updated: 2024/11/18 17:05:57 by ssbaytri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf_bonus.h"

static int	ft_puthex_recursive(unsigned int n, int c)
{
	int		count;
	char	*hex;

	count = 0;
	if (c)
		hex = "0123456789ABCDEF";
	else
		hex = "0123456789abcdef";
	if (n >= 16)
		count += ft_puthex_recursive(n / 16, c);
	count += ft_putchar_bonus(hex[n % 16]);
	return (count);
}

int	ft_puthex_bonus(unsigned int n, int c, t_flags flags)
{
	int	count;

	count = 0;
	if (flags.hash && n != 0)
	{
		if (c)
			count += ft_putstr_bonus("0X");
		else
			count += ft_putstr_bonus("0x");
	}
	count += ft_puthex_recursive(n, c);
	return (count);
}
