/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maouzal <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 23:49:25 by maouzal           #+#    #+#             */
/*   Updated: 2022/10/08 01:55:13 by maouzal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

size_t	ft_strlcpy(char	*dst, const	char	*src, size_t	dstsize)
{
	size_t	x;
	size_t	i;

	x = 0;
	i = 0;
	while (src[i] != '\0')
		i++;
	while(src[x] != '\0' && x < (dstsize - 1))
	{
		dst[x] = src[x];
		x++;
	}
	if (dstsize != 0)
		dst[x] = '\0';
	return (i);
}
