/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tools.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpozinen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/01 17:43:01 by dpozinen          #+#    #+#             */
/*   Updated: 2018/03/01 17:43:02 by dpozinen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*free_n_join(char *s1, char *s2, int f)
{
	char *tmp1;
	char *tmp2;
	char *ret;

	tmp2 = s2;
	tmp1 = s1;
	ret = ft_strjoin(s1, s2);
	if (f == 1)
		free(tmp1);
	if (f == 2)
		free(tmp2);
	if (f == 3)
	{
		free(tmp1);
		free(tmp2);
	}
	return (ret);
}

char	*string_to_upper(char *string)
{
	int		i;

	if (!string)
		return (0);
	i = 0;
	while (string[i])
	{
		string[i] = ft_toupper(string[i]);
		i++;
	}
	return (string);
}

char	*make_s_of_chars(int n, char c)
{
	char	*s;
	int		i;

	if (n <= 0 || !(s = ft_strnew(n)))
		return (0);
	i = 0;
	while (i < n)
		s[i++] = c;
	return (s);
}

char	*ft_insert_string(char *s_original, char *s_to_insert, int where)
{
	int		i;
	char	*s_ret;
	int		i_so;

	i_so = 0;
	i = 0;
	if (!(s_ret = ft_strnew(ft_strlen(s_original) + ft_strlen(s_to_insert))))
		return (0);
	while (i < where && s_original[i_so])
		s_ret[i++] = s_original[i_so++];
	while (*s_to_insert)
		s_ret[i++] = *s_to_insert++;
	while (s_original[i_so])
		s_ret[i++] = s_original[i_so++];
	free(s_original);
	return (s_ret);
}

int		find_not_c(char c, char *s, int *n)
{
	int i;

	i = 0;
	if (!s)
		return (0);
	while (s[i])
	{
		if (s[i] != c)
		{
			if (n)
				*n = i;
			return (1);
		}
		i++;
	}
	return (0);
}
