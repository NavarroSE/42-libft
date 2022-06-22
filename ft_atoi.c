/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manavarr <manavarr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/24 19:48:12 by manavarr          #+#    #+#             */
/*   Updated: 2022/05/12 21:10:55 by manavarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	size_t				i;
	int					neg;
	unsigned long int	answ;

	i = 0;
	neg = 1;
	answ = 0;
	while ((str[i] >= 9 && str[i] <= 13) || (str[i] == ' '))
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			neg *= -1;
		i++;
	}
	while (ft_isdigit(str[i]))
	{
		answ *= 10;
		answ += str[i] - 48;
		i++;
	}
	return (answ * neg);
}

/* int	ft_limits(int answ, int neg)
{
	if (neg == 1 && answ < 0)
		answ = -1;
	if (neg == -1 && answ > 0)
		answ = 0;
	return (answ);
} */

//#include <stdio.h>
//#include <stdlib.h>
//	answ = ft_limits((answ * neg), neg);
