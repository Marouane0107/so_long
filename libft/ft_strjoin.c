/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maouzal <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 18:06:47 by maouzal           #+#    #+#             */
/*   Updated: 2022/10/14 19:15:59 by maouzal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char			*s3;
	unsigned int	x;
	unsigned int	i;
	unsigned int	j;

	x = 0;
	i = 0;
	j = 0;
	if (!s2 || !s1)
		return (0);
	s3 = malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!(s3))
		return (0);
	while (s1[i] != '\0')
	{
		s3[x] = s1[i];
		i++;
		x++;
	}
	while (s2[j] != '\0')
	{
		s3[x++] = s2[j++];
	}
	s3[x] = '\0';
	return (s3);
}
