/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_bonus.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssbaytri <ssbaytri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 17:10:23 by ssbaytri          #+#    #+#             */
/*   Updated: 2024/11/18 18:27:22 by ssbaytri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_BONUS_H
# define FT_PRINTF_BONUS_H

# include <stdarg.h>
# include <unistd.h>

typedef struct s_flags
{
	int	hash;
	int	plus;
	int	space;
}		t_flags;

// Bonus func
int		ft_printf(const char *format, ...); 
int		ft_putnbr_bonus(int n, t_flags flags);
int		ft_puthex_bonus(unsigned int n, int uppercase, t_flags flags);
int		ft_put_p_bonus(void *p);
int		ft_put_un_bonus(unsigned int n);
int		ft_putchar_bonus(char c);
int		ft_putstr_bonus(const char *s);

#endif