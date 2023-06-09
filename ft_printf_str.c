/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_str.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agoksu <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/27 17:34:38 by agoksu            #+#    #+#             */
/*   Updated: 2022/11/27 17:34:42 by agoksu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

void	ft_printf_str(char *str, int *i)
{
	int	x;

	if (!str)
	{
		ft_printf_str("(null)", i);
		return ;
	}
	x = 0;
	while (str[x])
	{
		write(1, &str[x], 1);
		x++;
	}
	*i += x;
}
