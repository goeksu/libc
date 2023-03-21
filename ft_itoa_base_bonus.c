/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agoksu <agoksu@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 17:53:14 by agoksu            #+#    #+#             */
/*   Updated: 2022/10/05 17:53:17 by agoksu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include "libft.h"

char	*ft_itoa_base(int n, int base)
{
	int			len;
	char		*ret;
	const char	*digits = "0123456789abcdef";

	len = ft_numlen(n, base);
	ret = malloc(sizeof(char) * (len + 1));
	if (!ret)
		return (0);
	ret[len] = 0;
	if (n == 0)
		ret[0] = '0';
	if (n < 0)
		ret[0] = '-';
	while (n)
	{
		if (n > 0)
			ret[--len] = digits[n % base];
		else
			ret[--len] = digits[-n % base * -1];
		n /= base;
	}
	return (ret);
}
