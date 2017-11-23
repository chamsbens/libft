/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchamsed <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/07 19:22:34 by bchamsed          #+#    #+#             */
/*   Updated: 2017/11/07 19:22:34 by bchamsed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*newstr;
	int		x;

	newstr = NULL;
	if (s != NULL)
	{
		x = 0;
		newstr = ft_strnew(ft_strlen(s));
		if (!newstr)
			return (NULL);
		while (s[x])
		{
			newstr[x] = f(s[x]);
			x++;
		}
	}
	return (newstr);
}
