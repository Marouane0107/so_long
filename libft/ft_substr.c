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
	size_t			i;
	unsigned int	x;
	size_t			slen;

	if (!s)
		return (0);
	slen = ft_strlen(s);
	i = 0;
	x = start;
	if (start >= ft_strlen(s) || len == 0)
		return (ft_strdup(""));
	if (len > ft_strlen(s + x))
		len = ft_strlen(s + x);
	ns = malloc(len + 1);
	if (!ns)
		return (0);
	while (s[x] != '\0' && i < len)
	{
		ns[i] = s[x];
		x++;
		i++;
	}
	ns[i] = '\0';
	return (ns);
}
