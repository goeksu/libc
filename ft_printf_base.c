/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agoksu <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/27 17:34:10 by agoksu            #+#    #+#             */
/*   Updated: 2022/11/27 17:35:51 by agoksu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

int	ft_check_base(char *base)
{
	int	no_error;
	int	count;
	int	count2;

	count = 0;
	no_error = 1;
	while (base[count] != '\0' && no_error)
	{
		count2 = count + 1;
		if (base[count] == '+' || base[count] == '-')
				no_error = 0;
		while (base[count2] != '\0' && no_error)
		{
			if (base[count] == base[count2])
				no_error = 0;
			count2++;
		}
		count++;
	}
	if (count < 2)
		no_error = 0;
	return (no_error);
}

int	ft_sizebase(char *base)
{
	int	i;

	i = 0;
	while (base[i] != '\0')
		i++;
	return (i);
}

void	ft_print_n(unsigned int nbr, char *base, int num_base, int *i)
{
	char	res;

	if (nbr / num_base != 0)
		ft_print_n(nbr / num_base, base, num_base, i);
	res = base[nbr % num_base];
	ft_printf_char(res, i);
}

void	ft_printf_base(unsigned int n, char *base, int *i)
{
	int		no_error;
	int		num_base;

	no_error = ft_check_base(base);
	if (no_error)
	{
		num_base = ft_sizebase(base);
		ft_print_n(n, base, num_base, i);
	}
}
