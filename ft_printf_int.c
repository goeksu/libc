/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_int.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agoksu <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/27 17:34:29 by agoksu            #+#    #+#             */
/*   Updated: 2022/11/27 17:34:32 by agoksu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

void	ft_printf_int(int nb, int *i)
{
	long long	nbr;

	nbr = (long long) nb;
	if (nbr < 0)
	{
		ft_printf_char('-', i);
		nbr *= -1;
	}
	if (nbr >= 10)
	{
		ft_printf_int(nbr / 10, i);
		nbr %= 10;
	}
	ft_printf_char(nbr + '0', i);
}
