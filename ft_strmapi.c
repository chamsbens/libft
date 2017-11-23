/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchamsed <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/07 19:22:45 by bchamsed          #+#    #+#             */
/*   Updated: 2017/11/07 19:22:46 by bchamsed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*newstr;
	unsigned int	x;

	newstr = NULL;
	if (s != NULL)
	{
		x = 0;
		newstr = ft_strnew(ft_strlen(s));
		if (!newstr)
			return (NULL);
		while (s[x])
		{
			newstr[x] = f(x, s[x]);
			x++;
		}
	}
	return (newstr);
}
