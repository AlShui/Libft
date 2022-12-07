/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blahloum <blahloum@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 16:36:15 by blahloum          #+#    #+#             */
/*   Updated: 2022/10/26 16:06:39 by blahloum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	char	*f;	
	char	x;
	size_t	i;

	f = s;
	x = c;
	i = 0;
	while (i < n)
	{
		f[i] = x;
		i++;
	}
	return (f);
}
