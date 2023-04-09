/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agoksu <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/27 17:33:58 by agoksu            #+#    #+#             */
/*   Updated: 2022/11/27 17:35:27 by agoksu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

void	ft_print_all(const char *str, int *i, va_list args, int x)
{
	if (str[x + 1] == '%')
		ft_printf_char('%', i);
	else if (str[x + 1] == 'c')
		ft_printf_char(va_arg(args, int), i);
	else if (str[x + 1] == 's')
		ft_printf_str(va_arg(args, char *), i);
	else if (str[x + 1] == 'p')
	{
		ft_printf_str("0x", i);
		ft_printf_hex(va_arg(args, unsigned long long), i);
	}
	else if (str[x + 1] == 'd')
		ft_printf_int(va_arg(args, int), i);
	else if (str[x + 1] == 'i')
		ft_printf_int(va_arg(args, int), i);
	else if (str[x + 1] == 'u')
		ft_printf_nb(va_arg(args, unsigned int), i);
	else if (str[x + 1] == 'x')
		ft_printf_base(va_arg(args, unsigned int), "0123456789abcdef", i);
	else if (str[x + 1] == 'X')
		ft_printf_base(va_arg(args, unsigned int), "0123456789ABCDEF", i);
}

int	ft_printf(char const *str, ...)
{
	va_list	args;
	int		i;
	int		j;

	j = 0;
	i = 0;
	va_start(args, str);
	while (str[j])
	{
		if (str[j] == '%')
		{
			ft_print_all(str, &i, args, j);
			j++;
		}
		else
			ft_printf_char(str[j], &i);
		j++;
	}
	va_end(args);
	return (i);
}
