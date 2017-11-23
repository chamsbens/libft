/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchamsed <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/07 19:44:36 by bchamsed          #+#    #+#             */
/*   Updated: 2017/11/07 19:44:37 by bchamsed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	x;
	char	*ss;
	int		a;

	x = (char)c;
	ss = (char*)s;
	a = ft_strlen(ss);
	while (ss[a] != x && a != 0)
		a--;
	if (ss[a] != x)
		return (NULL);
	else
		return (&ss[a]);
}
