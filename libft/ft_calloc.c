/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maouzal <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 11:52:20 by maouzal           #+#    #+#             */
/*   Updated: 2022/10/27 13:16:29 by maouzal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <limits.h>

void	*ft_calloc(size_t count, size_t size)
{
	void	*baf;

	baf = malloc (count * size);
	if (!(baf))
		return (0);
	if (size && count * size > SIZE_MAX)
		return (0);
	ft_bzero(baf, count * size);
	return (baf);
}
