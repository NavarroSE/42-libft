/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manavarr <manavarr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/30 20:09:50 by manavarr          #+#    #+#             */
/*   Updated: 2022/05/12 21:23:11 by manavarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*str;

	if (!s)
		return (NULL);
	i = ft_strlen(s);
	if (start >= i)
		start = i;
	if (i - start < len)
		len = i - start;
	str = (char *)malloc(sizeof(char) * len + 1);
	if (str)
	{
		ft_memcpy(str, (void *)&s[start], len);
		str[len] = '\0';
	}
	return (str);
}
