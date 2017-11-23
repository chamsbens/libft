/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchamsed <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/07 19:41:49 by bchamsed          #+#    #+#             */
/*   Updated: 2017/11/07 19:41:51 by bchamsed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*str[len];
	unsigned char	*s1;
	unsigned char	*s2;

	s1 = (unsigned char*)dst;
	s2 = (unsigned char*)src;
	if (len < 134217728)
	{
		ft_memcpy(str, s2, len);
		ft_memcpy(s1, str, len);
		return (s1);
	}
	return (NULL);
}
