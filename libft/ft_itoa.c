/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maouzal <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 03:59:15 by maouzal           #+#    #+#             */
/*   Updated: 2022/10/19 07:08:55 by maouzal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static long	ft_count_n(long n)
{
	long	len;
	long	a;

	a = n;
	len = 0;
	if (n == 0)
		len++;
	if (n < 0)
	{
		len++;
		n *= -1;
	}
	while (n > 0)
	{
		n = n / 10;
		if (n % 10 != 0)
			len++;
	}
	if (n % 10 < 10 && a != 0)
			len++;
	return (len + 1);
}

static void	ft_it(long n, char *p, long i, long len)
{
	i = 0;
	while (n != 0)
	{
		i = n % 10;
		n = n / 10;
		if (i >= 0)
			p[len--] = i + '0';
	}
}

char	*ft_itoa(int n)
{
	char	*p;
	long	x;
	long	len;
	long	i;

	i = n;
	len = ft_count_n(n);
	x = 0;
	p = malloc(len * sizeof(char));
	if (!(p))
		return (0);
	if (i < 0)
	{
		p[x] = '-';
		i *= -1;
	}
	if (n == 0)
	{
		p[x] = '0';
		p[x + 1] = '\0';
	}
	len -= 1;
	p[len--] = '\0';
	ft_it(i, p, i, len);
	return (p);
}
