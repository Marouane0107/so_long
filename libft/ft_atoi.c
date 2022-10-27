/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maouzal <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 10:56:18 by maouzal           #+#    #+#             */
/*   Updated: 2022/10/27 12:17:43 by maouzal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char	*str)
{
	long int	x;
	long int	w;
	long int	res;

	res = 0;
	x = 0;
	w = 1;
	while (str[x] == '\t' || str[x] == '\n' || str[x] == '\v' ||
		   	str[x] == '\f' || str[x] == '\r' || str[x] == ' ')
		x++;
	if (str[x] == '-')
	{
		w = -1;
		x++;
	}
	else if (str[x] == '+')
	{
			w = 1;
			x++;
	}
	while (str[x] >= '0' && str[x] <= '9')
	{
		res = res * 10 + str[x] - 48;
		x++;
	}
	return (res * w);
}
