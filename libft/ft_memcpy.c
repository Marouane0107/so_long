/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maouzal <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 03:47:37 by maouzal           #+#    #+#             */
/*   Updated: 2022/10/07 04:29:40 by maouzal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void*	ft_memcpy(void	*dest, const void *src, int	n)
{
	int	x;
	char	*des;
	const char	*sr;

	des = dest;
	sr = src;
	x = 0;
	while(sr[x] != '\0' && x < n)
	{
		des[x] = sr[x];
		x++;
	}
	return (des);
}
