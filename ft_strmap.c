/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvernius <cvernius@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/23 20:54:09 by cvernius          #+#    #+#             */
/*   Updated: 2019/04/24 10:15:15 by cvernius         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		s[i] = malloc(f(s[i]));
		i++;
	}
	s[i] = malloc(f[s[i]);
	return (s);
}
