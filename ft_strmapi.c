/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almighty <almighty@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 12:59:59 by blahloum          #+#    #+#             */
/*   Updated: 2022/12/15 16:00:21 by almighty         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*str;
	unsigned int	i;
	int				size;

	i = 0;
	if (!s || !f)
		return (0);
	size = ft_strlen(s);
	str = malloc((size + 1) * sizeof(char *));
	if (!str)
		return (NULL);
	str[size] = '\0';
	while (s && size)
	{
		str[i] = f(i, s[i]);
		i++;
		size--;
	}
	return (str);
}
