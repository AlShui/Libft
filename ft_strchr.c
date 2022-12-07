/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blahloum <blahloum@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 11:32:36 by blahloum          #+#    #+#             */
/*   Updated: 2022/11/10 11:25:37 by blahloum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*str;
	char	l;

	str = (char *) s;
	l = (char) c;
	while (*str != '\0')
	{
		if (*str == l)
			return (str);
		str++;
	}
	if (l == '\0')
		return (str);
	return (NULL);
}
