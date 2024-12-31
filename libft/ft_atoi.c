/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kokamoto <kojokamo120@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 21:56:59 by kokamoto          #+#    #+#             */
/*   Updated: 2024/12/31 15:26:55 by kokamoto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

long long	ft_atoi(const char *str)
{
	int		i;
	int		sign;
	long	num;

	i = 0;
	sign = 1;
	num = 0;
	while (str[i] == ' ' || (str[i] >= '\t' && str[i] <= '\r'))
		i++;
	if (str[i] == '-')
		sign = -1;
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		if (sign * num > LLONG_MAX / 10
			|| (sign * num * 10 > LLONG_MAX - (str[i] - '0')))
			return ((long long)LLONG_MAX);
		if (sign * num < LLONG_MIN / 10
			|| (sign * num * 10 < LLONG_MIN + (str[i] - '0')))
			return ((long long)LLONG_MIN);
		num = num * 10 + str[i] - '0';
		i++;
	}
	return (sign * num);
}
