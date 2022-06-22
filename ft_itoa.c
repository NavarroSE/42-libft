/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manavarr <manavarr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 11:34:40 by manavarr          #+#    #+#             */
/*   Updated: 2022/06/16 12:04:02 by manavarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_neg(int n)
{
	if (n < 0)
		n = -n;
	return (n);
}

static size_t	ft_num_len(int n)
{
	size_t	i;

	i = 0;
	if (n <= 0)
		i++;
	while (n)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char	*num;
	size_t	pos;
	size_t	dig;

	dig = ft_num_len(n);
	num = ft_calloc(dig + 1, sizeof(char));
	if (!num)
		return (num);
	if (n < 0)
		num[0] = '-';
	else if (n == 0)
		num[0] = '0';
	pos = dig - 1;
	while (n)
	{
		num[pos] = ft_neg(n % 10) + '0';
		n = n / 10;
		pos--;
	}
	return (num);
}
