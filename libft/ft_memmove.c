/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maouzal <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 04:31:16 by maouzal           #+#    #+#             */
/*   Updated: 2022/10/22 08:43:17 by maouzal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void	*ft_memmove(void	*dest, const void	*src, size_t	len)
{
	char		*des;
	const char	*sr;

	des = dest;
	sr = src;
	if (des > sr)
		ft_memcpy(des, sr, len);
	else
	{
		while (len > 0)
		{
			des[len - 1] = sr[len - 1];
			len--;
		}
	}
	return (des);
}
