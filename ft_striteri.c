/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchamsed <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/07 19:22:15 by bchamsed          #+#    #+#             */
/*   Updated: 2017/11/07 19:22:16 by bchamsed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int x;

	x = 0;
	if (s != NULL && f != NULL)
	{
		while (s[x])
		{
			f(x, &s[x]);
			x++;
		}
	}
}
