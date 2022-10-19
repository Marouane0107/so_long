/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maouzal <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 07:09:59 by maouzal           #+#    #+#             */
/*   Updated: 2022/10/19 08:19:14 by maouzal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	x;
	char			*p;

	x = 0;
	if (!s || (!(*f) && !s))
		return (0);
	if (!(*f))
		return (ft_strdup(s));
	p = malloc ((ft_strlen(s) + 1) * sizeof(char));
	if (!(p))
		return (0);
	while (s[x] != '\0')
	{
		p[x] = (*f)(x, s[x]);
		x++;
	}
	p[x] = '\0';
	return (p);
}
