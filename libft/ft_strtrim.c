/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maouzal <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 19:17:18 by maouzal           #+#    #+#             */
/*   Updated: 2022/10/16 19:10:48 by maouzal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_start(char const *s1, char const *set)
{
	unsigned int	x;
	unsigned int	i;

	x = 0;
	i = 0;
	while (s1[x] != '\0' && set[i] != '\0')
	{
		if (s1[x] == set[i])
		{
			x++;
			i = 0;
			continue ;
		}
		i++;
	}
	return (x);
}

int	ft_end(char const *s1, char const *set)
{
	unsigned int	x2;
	unsigned int	i;

	i = 0;
	x2 = ft_strlen(s1) - 1;
	while (x2 > 0 && set[i] != '\0')
	{
		if (s1[x2] == set[i])
		{
			x2--;
			i = 0;
			continue ;
		}
		i++;
	}
	return (x2);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char			*s2;
	unsigned int	i;
	unsigned int	x;
	unsigned int	x2;

	i = 0;
	x = ft_start(s1, set);
	x2 = ft_end(s1, set);
	s2 = malloc((x2 - x) + 2);
	while (x <= x2)
	{
		s2[i] = s1[x];
		i++;
		x++;
	}
	s2[i] = '\0';
	return (s2);
}
