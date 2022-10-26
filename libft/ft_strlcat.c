/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maouzal <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 02:06:51 by maouzal           #+#    #+#             */
/*   Updated: 2022/10/13 13:15:35 by maouzal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	x;
	size_t	i;
	size_t	w;
	size_t	lend;

	w = 0;
	x = 0;
	i = 0;
	while (src[w] != '\0')
		w++;
	while (dst[i] != '\0')
		i++;
	if (dstsize == 0)
		return (w);
	lend = i;
	while (src[x] != '\0' && i < dstsize - 1)
	{
		dst[i] = src[x];
		i++;
		x++;
	}
	dst[i] = '\0';
	if (dstsize < lend)
		return (dstsize + w);
	return (lend + w);
}
