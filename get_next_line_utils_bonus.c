/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils_bonus.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agoksu <agoksu@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 12:16:41 by agoksu            #+#    #+#             */
/*   Updated: 2023/05/31 12:16:44 by agoksu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	if (!s)
		return (0);
	while (s[i])
		i++;
	return (i);
}

int	ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	if (!s)
		return (0);
	while (s[i])
	{
		if (s[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strjoin(char *s1, char *s2)
{
	int		len;
	int		i;
	char	*rt;

	if (!s1)
	{
		s1 = (char *)malloc(sizeof(char) * 1);
		s1[0] = 0;
	}
	len = ft_strlen(s1) + ft_strlen(s2);
	rt = (char *)malloc(sizeof(char) * (len + 1));
	i = 0;
	while (s1[i])
	{
		rt[i] = s1[i];
		i++;
	}
	while (*s2)
		rt[i++] = *s2++;
	rt[i] = 0;
	free(s1);
	return (rt);
}
