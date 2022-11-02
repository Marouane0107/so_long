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

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	x;
	size_t	dstlen;
	size_t	srclen;
	size_t	lend;

	x = 0;
	if (!dstsize)
		return (ft_strlen(src));
	srclen = ft_strlen(src);
	dstlen = ft_strlen(dst);
	lend = dstlen;
	if (dstsize < lend)
		return (dstsize + srclen);
	while (src[x] != '\0' && dstlen < dstsize - 1)
	{
		dst[dstlen] = src[x];
		dstlen++;
		x++;
	}
	dst[dstlen] = '\0';
	return (lend + srclen);
}
