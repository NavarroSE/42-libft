/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manavarr <manavarr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/24 19:48:46 by manavarr          #+#    #+#             */
/*   Updated: 2022/04/25 22:21:46 by manavarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*source;
	unsigned char	*dest;

	source = (unsigned char *)src;
	dest = (unsigned char *)dst;
	if (dst == NULL && src == NULL)
		return (NULL);
	if (dst <= src)
		return (ft_memcpy(dst, src, len));
	if (dst > src)
	{
		while (len--)
			dest[len] = source[len];
	}
	return (dst);
}

/* void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t			i;
	unsigned char	*source;
	unsigned char	*dest;
	char			index;

	i = 0;
	source = (unsigned char *)src;
	dest = (unsigned char *)dst;
	index = +1;
	if (dst == NULL && src == NULL)
		return (NULL);
	if (dst > src)
	{
		index = -1;
		dest = (unsigned char *)(dst + (len - 1));
		source = (unsigned char *)(src + (len - 1));
	}
	while (i < len)
	{
		*dest = *source;
		dest += index;
		source += index;
		i++;
	}
	return (dst);
} */
