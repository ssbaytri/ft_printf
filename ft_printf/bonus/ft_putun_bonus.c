/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putun_bonus.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssbaytri <ssbaytri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 22:51:21 by ssbaytri          #+#    #+#             */
/*   Updated: 2024/11/18 17:09:11 by ssbaytri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf_bonus.h"

int	ft_put_un_bonus(unsigned int n)
{
	int	i;

	i = 0;
	if (n > 9)
	{
		i += ft_put_un_bonus(n / 10);
		i += ft_put_un_bonus(n % 10);
	}
	else
		i += ft_putchar_bonus(n + '0');
	return (i);
}
