/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchamsed <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/20 13:32:15 by bchamsed          #+#    #+#             */
/*   Updated: 2017/11/20 13:32:16 by bchamsed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		*ft_range(int min, int max)
{
	int		i;
	int		*str;

	i = 0;
	if (min >= max)
	{
		str = 0;
		return (str);
	}
	str = malloc(sizeof(int) * (max - min));
	if (str == NULL)
		return (0);
	while (i < (max - min))
	{
		str[i] = min + i;
		i++;
	}
	return (str);
}
