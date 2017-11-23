/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchamsed <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/07 19:45:25 by bchamsed          #+#    #+#             */
/*   Updated: 2017/11/07 19:45:26 by bchamsed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *str)
{
	int i;
	int a;
	int res;

	i = 0;
	a = 0;
	res = 0;
	while (str[i] == '\t' || str[i] == '\n' || str[i] == '\r' ||
	str[i] == '\v' || str[i] == '\f' || str[i] == ' ')
		i++;
	if (str[i] == '-')
		a = 1;
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = (res * 10) + str[i] - '0';
		i++;
	}
	if (a != 0)
		res = -res;
	return (res);
}
