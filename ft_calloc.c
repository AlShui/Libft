/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blahloum <blahloum@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 09:28:29 by blahloum          #+#    #+#             */
/*   Updated: 2022/12/05 10:43:47 by blahloum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*mal;

	if (nmemb != 0 && size != 0)
	{
		mal = malloc(nmemb * size);
		if (!mal)
			return (NULL);
		ft_bzero(mal, nmemb);
		return (mal);
	}
	return (NULL);
}
