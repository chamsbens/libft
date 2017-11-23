/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchamsed <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/14 17:00:14 by bchamsed          #+#    #+#             */
/*   Updated: 2017/11/14 17:00:16 by bchamsed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	stop;
	unsigned char	*ss;
	size_t			a;

	ss = (unsigned char*)s;
	stop = (unsigned char)c;
	a = 0;
	while (n)
	{
		if (ss[a] != stop)
			ss++;
		else
			return (ss + a);
		n--;
	}
	return (NULL);
}
