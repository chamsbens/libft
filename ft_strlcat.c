/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchamsed <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/07 19:44:13 by bchamsed          #+#    #+#             */
/*   Updated: 2017/11/07 19:44:13 by bchamsed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	lendst;
	size_t	lensrc;

	lendst = ft_strlen(dst);
	lensrc = ft_strlen(src);
	if (size <= lendst)
		return (size + lensrc);
	if (size == lendst + 1)
		return (lendst + lensrc);
	else
	{
		ft_strncat(dst, (char *)src, (size - lendst - 1));
		return (lendst + lensrc);
	}
}
