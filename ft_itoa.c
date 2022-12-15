/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almighty <almighty@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 12:55:22 by blahloum          #+#    #+#             */
/*   Updated: 2022/12/15 17:03:02 by almighty         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_pop_int(long int n, int size, char *strnum);

char	*ft_itoa(int n)
{
	long int	ex_n;
	char		*strnum;
	int			i;

	ex_n = n;
	i = 0;
	if (n < 0 || n == 0)
		i++;
	while (n != 0)
	{
		n = n / 10;
		i++;
	}
	strnum = malloc((i + 1) * sizeof(char *));
	if (!strnum)
		return (NULL);
	ft_pop_int(ex_n, i, strnum);
	strnum[i] = '\0';
	return (strnum);
}

static char	*ft_pop_int(long int n, int size, char *strnum)
{
	long int	ex_n;

	ex_n = 0;
	if (n < 0)
	{
		strnum[0] = '-';
		n *= -1;
	}
	if (n == 0)
	{
		strnum[size - 1] = 0 + 48;
		return (strnum);
	}
	while (n > 0 && size)
	{
		ex_n = n % 10 + 48;
		n = n / 10;
		strnum[size - 1] = ex_n;
		size--;
	}
	return (strnum);
}
