/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchamsed <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/16 11:14:37 by bchamsed          #+#    #+#             */
/*   Updated: 2017/11/16 11:14:38 by bchamsed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list	*tmp;
	t_list	*d;

	d = *alst;
	while (d != NULL)
	{
		del(d->content, d->content_size);
		tmp = d;
		d = d->next;
		free(tmp);
	}
	d = NULL;
	*alst = d;
}
