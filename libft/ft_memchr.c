/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maouzal <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 13:00:09 by maouzal           #+#    #+#             */
/*   Updated: 2022/10/23 13:35:16 by maouzal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	x;

	x = 0;
	while ((unsigned char *)s + x >= 0 && x < n)
	{
		if ((unsigned char )c == *((unsigned char *)s + x))
			return ((unsigned char *)s + x);
		x++;
	}
	return (0);
}
