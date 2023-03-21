/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agoksu <agoksu@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 17:56:00 by agoksu            #+#    #+#             */
/*   Updated: 2022/10/05 17:56:04 by agoksu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stddef.h>

void	*ft_memset(void *b, int c, size_t len)
{
	void	*ret;

	ret = b;
	while (len--)
		*(char *)b++ = (unsigned char)c;
	return (ret);
}
