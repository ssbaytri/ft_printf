/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssbaytri <ssbaytri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 22:51:03 by ssbaytri          #+#    #+#             */
/*   Updated: 2024/11/18 17:16:11 by ssbaytri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf_bonus.h"

static void	init_flags(t_flags *flags)
{
	flags->hash = 0;
	flags->plus = 0;
	flags->space = 0;
}

static int	parse_flags(const char *format, int *i, t_flags *flags)
{
	while (format[*i] == '#' || format[*i] == '+' || format[*i] == ' ')
	{
		if (format[*i] == '#')
			flags->hash = 1;
		else if (format[*i] == '+')
			flags->plus = 1;
		else if (format[*i] == ' ')
			flags->space = 1;
		(*i)++;
	}
	return (1);
}

static int	helper_func(char c, va_list args, t_flags flags)
{
	int	count;

	count = 0;
	if (c == 'c')
		count += ft_putchar_bonus(va_arg(args, int));
	else if (c == 's')
		count += ft_putstr_bonus(va_arg(args, char *));
	else if (c == 'i' || c == 'd')
		count += ft_putnbr_bonus(va_arg(args, int), flags);
	else if (c == 'u')
		count += ft_put_un_bonus(va_arg(args, unsigned int));
	else if (c == 'x')
		count += ft_puthex_bonus(va_arg(args, unsigned int), 0, flags);
	else if (c == 'X')
		count += ft_puthex_bonus(va_arg(args, unsigned int), 1, flags);
	else if (c == 'p')
		count += ft_putstr_bonus("0x") + ft_put_p_bonus(va_arg(args, void *));
	else if (c == '%')
		count += ft_putchar_bonus('%');
	else
		count += ft_putchar_bonus('%') + ft_putchar_bonus(c);
	return (count);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	t_flags	flags;
	int		count;
	int		i;

	if (write(1, NULL, 0) == -1 || !format)
		return (-1);
	va_start(args, format);
	count = 0;
	i = 0;
	while (format[i])
	{
		if (format[i] == '%' && format[i + 1] != '\0')
		{
			i++;
			init_flags(&flags);
			parse_flags(format, &i, &flags);
			count += helper_func(format[i], args, flags);
		}
		else
			count += ft_putchar_bonus(format[i]);
		i++;
	}
	va_end(args);
	return (count);
}
