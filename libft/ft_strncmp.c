/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maouzal <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 05:27:27 by maouzal           #+#    #+#             */
/*   Updated: 2022/10/13 13:19:08 by maouzal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	x;

	x = 0;
	if (!n)
		return (0);
	if (!s1[x] && !s2[x])
		return (0);
	while ((s1[x] || s2[x]) && (x < n))
	{
		if ((unsigned char)s1[x] != (unsigned char)s2[x])
			return ((unsigned char)s1[x] - (unsigned char)s2[x]);
		x++;
	}
	return ((unsigned char)s1[x - 1] - (unsigned char)s2[x - 1]);
}
