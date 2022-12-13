/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almighty <almighty@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 15:52:44 by blahloum          #+#    #+#             */
/*   Updated: 2022/12/14 00:30:07 by almighty         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_str_len(char const *s, char c);
static char		**ft_pop_mat(char const *s, char c, char **mat);

char	**ft_split(char const *s, char c)
{
	char	**mat;
	size_t	ns;

	ns = ft_str_len(s, c);
	mat = (char **)ft_calloc(ns + 1, sizeof(char *));
	mat = ft_pop_mat(s, c, mat);
	return (mat);
}

static size_t	ft_str_len(char const *s, char c)
{
	size_t	i;
	size_t	e;

	i = 0;
	e = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			e++;
			while (s[i] != c && s[i])
				i++;
		}
		else
			i++;
	}
	return (e);
}

static char	**ft_pop_mat(char const *s, char c, char **mat)
{
	int		i;
	size_t	nc;
	size_t	ns;

	i = 0;
	nc = 0;
	ns = 0;
	while (s[i])
	{
		if (s[i] != c && ns < ft_str_len(s, c))
		{
			while (s[i + nc] != c && s[i + nc])
				nc++;
			mat[ns] = ft_substr(s, i, nc);
			mat[ns][nc] = '\0';
			i += nc;
			nc = 0;
			ns++;
		}
		else
			i++;
	}
	return (mat);
}