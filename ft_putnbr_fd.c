/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almighty <almighty@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 16:55:16 by almighty          #+#    #+#             */
/*   Updated: 2022/12/15 17:52:35 by almighty         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_putnbr_rec(long int n, int fd);

void	ft_putnbr_fd(int n, int fd)
{
	char		c;
	long int	i;

	c = '-';
	i = n;
	if (i < 0)
	{
		i *= -1;
		write(fd, &c, 1);
	}
	ft_putnbr_rec(i, fd);
}

static void	ft_putnbr_rec(long int n, int fd)
{
	char	c;

	if (n > 9)
	{
		ft_putnbr_rec((n / 10), fd);
	}
	c = n % 10 + 48;
	write(fd, &c, 1);
}
