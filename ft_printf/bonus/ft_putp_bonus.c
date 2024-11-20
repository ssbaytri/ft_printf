/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putp_bonus.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssbaytri <ssbaytri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 22:51:15 by ssbaytri          #+#    #+#             */
/*   Updated: 2024/11/18 17:06:30 by ssbaytri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf_bonus.h"

int	ft_put_p_bonus(void *addr)
{
	unsigned long	address;
	char			*hex;
	int				i;
	int				j;

	address = (unsigned long)addr;
	i = 0;
	hex = "0123456789abcdef";
	if (address >= 16)
		i += ft_put_p_bonus((void *)(address / 16));
	j = address % 16;
	i += ft_putchar_bonus(hex[j]);
	return (i);
}
