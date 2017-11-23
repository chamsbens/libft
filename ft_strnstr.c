/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchamsed <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/07 19:45:02 by bchamsed          #+#    #+#             */
/*   Updated: 2017/11/07 19:45:02 by bchamsed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t len)
{
	size_t	n;
	size_t	i;
	char	*ss1;
	char	*ss2;

	if (*s2 == '\0')
		return ((char *)s1);
	if (!s2)
		return ((char *)s1);
	n = ft_strlen(s2);
	ss1 = (char *)s1;
	ss2 = (char *)s2;
	i = 0;
	while (ss1[i] && (i + n) <= len)
	{
		if (ft_strncmp(ss1 + i, ss2, n) == 0)
			return (ss1 + i);
		i++;
	}
	return (NULL);
}
