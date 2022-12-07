/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blahloum <blahloum@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 17:45:10 by blahloum          #+#    #+#             */
/*   Updated: 2022/10/26 18:09:03 by blahloum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	dln;		
	size_t	sln;
	size_t	tot;
	char	*r;

	if (!dest)
		return (0);
	r = (char *) src;
	i = 0;
	dln = ft_strlen(dest);
	sln = ft_strlen(src);
	tot = sln + size;
	if (size > dln)
		tot = sln + dln;
	while (src[i] != '\0' && (dln + 1) < size)
	{
		dest[dln] = r[i];
		dln++;
		i++;
	}
	if (dln < size)
		dest[dln] = '\0';
	return (tot);
}
