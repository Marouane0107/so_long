/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maouzal <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 06:25:53 by maouzal           #+#    #+#             */
/*   Updated: 2022/10/10 06:52:47 by maouzal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strnstr(const char	*haystack, const char	*needle, size_t	len)
{
	size_t	x;
	size_t	w;

	w = 0;
	x = 0;
	if (needle[x] == '\0' || len == 0)
		return ((char	*)haystack);
	while (needle[x] != '\0' && haystack[x] != '\0')
	{
		while (needle[w] == haystack[x])
		{
			w++;
			x++;
		}
		if (needle[w] == '\0')
			return ((char	*)haystack + x - w);
		x++;
	}
	return (0);
}
