/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maouzal <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 00:40:17 by maouzal           #+#    #+#             */
/*   Updated: 2022/10/20 00:49:54 by maouzal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long long	x;

	x = n;
	if (x == -2147483648)
	{
		write (fd, "-2147483648", 11);
		return ;
	}
	if (x < 0)
	{
		ft_putchar_fd('-', fd);
		x *= -1;
	}
	if (x > 9)
	{
		ft_putnbr_fd(x / 10, fd);
		ft_putchar_fd((x % 10) + 48, fd);
	}
	else if (x <= 9 && x >= 0)
		ft_putchar_fd(x + 48, fd);
}
