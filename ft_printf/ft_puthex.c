/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssbaytri <ssbaytri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/17 13:49:15 by ssbaytri          #+#    #+#             */
/*   Updated: 2024/11/18 15:23:26 by ssbaytri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthex(unsigned int n, int c)
{
	int		i;
	int		index;
	char	*hex;

	i = 0;
	if (c)
		hex = "0123456789ABCDEF";
	else
		hex = "0123456789abcdef";
	if (n >= 16)
		i += ft_puthex(n / 16, c);
	index = n % 16;
	i += ft_putchar(hex[index]);
	return (i);
}
