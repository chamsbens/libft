/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_power.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchamsed <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/20 13:34:44 by bchamsed          #+#    #+#             */
/*   Updated: 2017/11/20 13:34:46 by bchamsed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_power(int nb, int power)
{
	int res;

	res = nb;
	if (power == 0)
		return (1);
	if (power < 0)
		return (0);
	while (power - 1 > 0)
	{
		res = res * nb;
		power--;
	}
	return (res);
}
