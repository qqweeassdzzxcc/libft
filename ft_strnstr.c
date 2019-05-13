/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvernius <cvernius@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/16 19:16:59 by cvernius          #+#    #+#             */
/*   Updated: 2019/05/13 17:48:29 by cvernius         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
#include <stdio.h>
#include <string.h>


char	*ft_strndup(const char *str, size_t len);
char			*ft_strstr(const char *haystack, const char *needle);
size_t		ft_strlen(const char *s);

*/

static int		ft_start_on_i(char *hstack, const char *needle, size_t i,
							size_t len)
{
	while (hstack[i] != needle[0] && hstack[i] != '\0' && i < len)
		i++;
	return (i);
}

static int		ft_check_n_h(char *hstack, const char *needle, size_t i, int j)
{
	if (hstack[i] == needle[j] && hstack[i] != '\0' && needle[j] != '\0')
		return (1);
	else
		return (0);
}

static char		*ft_ret(char *hstack, size_t i, int flag, size_t len)
{
	if (flag == 0 || len == 0)
		return (NULL);
	else
		return (&hstack[i]);
}

char			*ft_strnstr(const char *haystack, const char *needle,
							size_t len)
{
	size_t	i;
	size_t	i_tmp;
	size_t	j;
	int		flag;
	char	*hstack;

	hstack = (char *)haystack;
	if (needle[0] == '\0')
		return (hstack);
	if (haystack[0] == '\0')
		return (NULL);
	i = 0;
	while (hstack[i] != '\0' && flag != 1 && i < len)
	{
		i_tmp = ft_start_on_i(hstack, needle, i, len);
		j = 0;
		while ((ft_check_n_h(hstack, needle, i_tmp, j)) == 1 && i_tmp < len)
		{
			i_tmp++;
			j++;
		}
		flag = (needle[j] == '\0') ? 1 : 0;
		i = (flag == 0) ? (i + 1) : i;
	}
	return (ft_ret(hstack, ft_start_on_i(hstack, needle, i, len), flag, len));
}



/*
char		*ft_strnstr(const char *haystack, const char *needle,
													size_t len)
{
	//char	*s;
	char	*tmp;

	if (haystack[0] == '\0' && needle[0] != '\0')
		return (NULL);
	if (needle[0] == '\0' && haystack[0] != '\0')
		return ((char*)haystack);
	tmp = ft_strndup(haystack, len);
	//s = ft_strstr((const char *)tmp, needle);
	return (ft_strstr((const char *)tmp, needle));
}
*/




/*
int		main(void)
{
	char *s;
	char *ss;
	size_t max = ft_strlen("see FF your FF return FF now FF");

	s = strnstr("see FF your FF return FF now FF", "FF", max);
	ss = ft_strnstr("see FF your FF return FF now FF", "FF", max);
	printf("my =%c\norig =%c\n", *ss, *s);
	return (0);
}
*/