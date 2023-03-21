/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agoksu <agoksu@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 17:57:30 by agoksu            #+#    #+#             */
/*   Updated: 2022/10/05 17:57:33 by agoksu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*ret;
	size_t	len;

	len = ft_strlen(s1);
	ret = malloc(sizeof(char) * (len + 1));
	if (!ret)
		return (0);
	ft_strlcpy(ret, s1, len + 1);
	return (ret);
}
