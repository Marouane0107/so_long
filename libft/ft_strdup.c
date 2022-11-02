/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maouzal <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 13:34:45 by maouzal           #+#    #+#             */
/*   Updated: 2022/10/19 08:14:13 by maouzal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char	*s1)
{
	char	*s2;
	size_t	len;
	size_t	x;

	x = 0;
	len = ft_strlen(s1) + 1;
	s2 = malloc(len);
	if (!s2)
		return (0);
	while (x < len)
	{
		s2[x] = s1[x];
		x++;
	}
	x--;
	if (s2[x] != '\0')
	{
		x++;
		s2[x] = '\0';
	}
	return (s2);
}
