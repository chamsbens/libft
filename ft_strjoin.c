/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchamsed <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/07 19:23:37 by bchamsed          #+#    #+#             */
/*   Updated: 2017/11/07 19:23:38 by bchamsed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char *join;

	if (!s1)
		return (NULL);
	if (!s2)
		return (NULL);
	join = ft_strnew(ft_strlen(s1) + ft_strlen(s2));
	if (!join)
		return (NULL);
	ft_strcpy(join, s1);
	ft_strcat(join, s2);
	return (join);
}
