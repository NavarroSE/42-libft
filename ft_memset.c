/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manavarr <manavarr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/24 19:48:53 by manavarr          #+#    #+#             */
/*   Updated: 2022/04/30 20:01:13 by manavarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int c, size_t n)
{
	unsigned char	*i;

	i = (unsigned char *)str;
	while (n > 0)
	{
		*(i++) = (unsigned char)c;
		n--;
	}
	return (str);
}
