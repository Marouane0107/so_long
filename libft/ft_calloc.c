/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maouzal <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 11:52:20 by maouzal           #+#    #+#             */
/*   Updated: 2022/10/13 11:02:00 by maouzal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t	count, size_t	size)
{
	void	*baf;

	baf = malloc (count * size);
	if (!(baf == malloc(count * size)))
		return (0);
	ft_bzero(baf, count * sizeof(size));
	return (baf);
}
