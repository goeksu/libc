/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isspace_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agoksu <agoksu@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 17:52:52 by agoksu            #+#    #+#             */
/*   Updated: 2022/10/05 17:52:55 by agoksu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_isspace(int c)
{
	return ((c >= 9 && c <= 13) || c == 32);
}