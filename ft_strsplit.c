/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchamsed <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/07 19:24:08 by bchamsed          #+#    #+#             */
/*   Updated: 2017/11/07 19:24:09 by bchamsed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_nb_words(char *str, char c)
{
	int i;
	int	nb;

	i = 0;
	nb = 0;
	while (str[i])
	{
		while (str[i] == c)
			i++;
		if (str[i] != c && str[i])
			nb++;
		while (str[i] != c && str[i])
			i++;
	}
	return (nb);
}

static void		initialisation(size_t *a, size_t *b)
{
	*a = 0;
	*b = 0;
}

static size_t	strlen_c(char const *str, char c)
{
	size_t	i;

	i = 0;
	while (str[i] != '\0' && str[i] != c)
		i++;
	return (i);
}

char			**ft_strsplit(char const *s, char c)
{
	size_t	i;
	size_t	n;
	char	**tab;

	initialisation(&n, &i);
	if (!s)
		return (NULL);
	tab = (char**)malloc(sizeof(char*) * ft_nb_words((char*)s, c) + 1);
	if (!tab)
		return (NULL);
	while (s[i] != '\0')
	{
		while (s[i] == c)
			i++;
		if (s[i])
		{
			tab[n] = ft_strnew(strlen_c(s + i, c));
			ft_strncpy(tab[n], (char*)s + i, strlen_c(s + i, c));
			n++;
		}
		while (s[i] != c && s[i])
			i++;
	}
	tab[n] = NULL;
	return (tab);
}
