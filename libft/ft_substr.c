/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maouzal <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 18:58:47 by maouzal           #+#    #+#             */
/*   Updated: 2022/10/14 17:36:06 by maouzal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*ns;
	unsigned int	i;
	unsigned int	x;

	i = 0;
	x = start;
	ns = malloc(len + 1);
	if (!(ns))
		return (0);
	while (i < len)
	{
		ns[i] = s[x];
		x++;
		i++;
	}
	ns[i] = '\0';
	return (ns);
}
