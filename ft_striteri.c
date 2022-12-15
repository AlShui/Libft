/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almighty <almighty@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 13:04:18 by blahloum          #+#    #+#             */
/*   Updated: 2022/12/15 16:20:10 by almighty         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;
	int				size;

	i = 0;
	if (!s)
		s = NULL;
	size = ft_strlen(s);
	while (s && size)
	{
		f(i, s);
		s++;
		i++;
		size--;
	}
}
