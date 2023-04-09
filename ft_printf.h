/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agoksu <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/27 17:34:04 by agoksu            #+#    #+#             */
/*   Updated: 2022/11/27 17:34:07 by agoksu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef FT_PRINTF_H

# define FT_PRINTF_H
# include <stdarg.h>
# include <unistd.h>

int		ft_printf(const char *str, ...);
void	ft_printf_char(char c, int *i);
void	ft_printf_int(int nb, int *i);
void	ft_printf_str(char *str, int *i);
void	ft_printf_hex(unsigned long long nb, int *i);
void	ft_printf_nb(unsigned int nb, int *i);
void	ft_printf_base(unsigned int n, char *base, int *i);

#endif
