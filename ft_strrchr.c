/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blahloum <blahloum@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 11:26:58 by blahloum          #+#    #+#             */
/*   Updated: 2022/11/10 11:41:17 by blahloum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*str;
	char	x;
	int		i;

	str = (char *) s;
	x = (char) c;
	i = ft_strlen(str);
	if (x == 0)
		return (str + i);
	while (i >= 0)
	{
		if (str[i] == x)
			return (str + i);
		i--;
	}
	return (NULL);
}
