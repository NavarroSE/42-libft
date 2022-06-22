/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manavarr <manavarr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/24 19:48:32 by manavarr          #+#    #+#             */
/*   Updated: 2022/06/13 11:53:05 by manavarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*loc;
	size_t	all;

	all = count + size;
	if (all < size || all < count)
		return (NULL);
	loc = (void *)malloc(count * size);
	if (!loc)
		return (NULL);
	ft_bzero(loc, count * size);
	return (loc);
}
