/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchamsed <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/07 19:24:25 by bchamsed          #+#    #+#             */
/*   Updated: 2017/11/07 19:24:26 by bchamsed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count_nb(int nb)
{
	long i;

	i = 0;
	if (nb == 0)
		i++;
	if (nb < 0)
	{
		i++;
		nb = -nb;
	}
	while (nb != 0)
	{
		nb /= 10;
		i++;
	}
	return (i);
}

char		*ft_itoa(int n)
{
	long	nb;
	long	len;
	char	*str;

	len = ft_count_nb(n);
	str = ft_strnew(len);
	if (!str)
		return (NULL);
	str[len] = '\0';
	len--;
	nb = n;
	if (nb < 0)
		nb = -nb;
	while (len >= 0)
	{
		str[len] = (nb % 10) + '0';
		len--;
		nb /= 10;
	}
	if (n < 0)
		str[0] = '-';
	return (str);
}
