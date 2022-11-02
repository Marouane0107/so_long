/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maouzal <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 02:24:45 by maouzal           #+#    #+#             */
/*   Updated: 2022/10/26 20:21:42 by maouzal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	x;
	int	w;

	w = 0;
	x = 0;
	while (s[w] != '\0')
		w++;
	if ((char)c == '\0')
		return ((char *)&s[w]);
	while (s[x] != '\0')
	{
		if (s[x] == (char)c)
			return ((char *)&s[x]);
		x++;
	}
	return (0);
}
