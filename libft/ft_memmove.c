/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maouzal <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 04:31:16 by maouzal           #+#    #+#             */
/*   Updated: 2022/10/09 00:29:35 by maouzal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void*	ft_memmove(void	*dest, const void	*src, size_t	len)
{
	size_t	x;
	char	*des;
	const char	*sr;

	des = dest;
	sr = src;
	x = 0;

	if (des == sr)
		return (des);
	if (des < sr)
	{
		while(sr[x] != '\0' && x < len)
		{
			des[x] = sr[x];
			x++;
		}
	}
	else
	{
		while (len > 0 )
		{
			des[len - 1] = sr[len - 1];
			len--;
		}
	}
	return (des);
}
