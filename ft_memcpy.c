/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchamsed <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/07 19:41:22 by bchamsed          #+#    #+#             */
/*   Updated: 2017/11/07 19:41:23 by bchamsed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char		*newdst;
	const char	*newsrc;

	newdst = (char *)dst;
	newsrc = (const char *)src;
	while (n)
	{
		*newdst++ = *newsrc++;
		n--;
	}
	return (dst);
}
