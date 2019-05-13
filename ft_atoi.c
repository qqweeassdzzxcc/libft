/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvernius <cvernius@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/16 21:19:10 by cvernius          #+#    #+#             */
/*   Updated: 2019/05/13 19:15:27 by cvernius         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *str)
{
	long		total;
	long		check;
	size_t		i;
	int			flag;

	total = 0;
	check = 0;
	i = 0;
	while ((str[i] != '\0') && (str[i] == '\n' || str[i] == '\t'
		|| str[i] == '\r' || str[i] == '\f' || str[i] == ' ' || str[i] == '\v'))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			flag = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9' && str[i] != '\0')
	{
		check = total * 10 + (str[i] - 48);
		if (check / 10 != total)
			return ((flag == -1) ? 0 : -1);
		total = total * 10 + (str[i] - 48);
		i++;
	}
	total = (flag == -1) ? (total * (-1)) : total;
	return (total);
}
