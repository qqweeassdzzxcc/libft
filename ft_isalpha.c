/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvernius <cvernius@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/23 19:49:15 by cvernius          #+#    #+#             */
/*   Updated: 2019/04/26 10:55:42 by cvernius         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_isalpha(int ch)
{
	return (((char)ch >= 'a' && (char)ch <= 'z') ||
								((char)ch >= 'A' && (char)ch <= 'Z') ? 1 : 0);
}