/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almighty <almighty@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 15:52:44 by blahloum          #+#    #+#             */
/*   Updated: 2022/12/12 15:18:58 by almighty         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static size_t	ft_str_len(char const *s, char c);

char	**ft_split(char const *s, char c)
{
	char	**mat;
	unsigned int	i;
	size_t	nc;
	size_t	ns;

	nc = ft_str_len(s, c);
	mat = (char **)malloc(sizeof(char *) * (nc + 1));
	i = 0;
	nc = 0;
	ns = 0;
	while (s[i] || mat[ns])
	{
		if (s[i] != c)
		{
			while (s[i] != c && s[i])
				nc++;
			mat[ns] = ft_substr(s, i, nc);
			printf("%s \n", mat[ns]);
			i += nc;
			nc = 0;
			ns++;
		}
		else
			i++;
	}

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

int	main(void)
{
	ft_split("asdjpomsdja posadjposajdpoa sdj poasjdpa jso ", ' ');
	return (0);
}
