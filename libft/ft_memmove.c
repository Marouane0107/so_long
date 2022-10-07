/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maouzal <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 04:31:16 by maouzal           #+#    #+#             */
/*   Updated: 2022/10/07 04:50:03 by maouzal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void*	ft_memmove(void	*dest, const void	*src, int	len)
{
	int	x;
	char	*des;
	const char	*sr;

	des = dest;
	sr = src;
	x = 0;
	while(sr[x] != '\0' && x < len)
	{
		des[x] = sr[x];
		x++;
	}
	return (des);
}
