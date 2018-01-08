/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   elem.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmadura <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/22 13:12:13 by fmadura           #+#    #+#             */
/*   Updated: 2018/01/08 13:19:36 by fmadura          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_elem	*new_elem(int value)
{
	t_elem *new;

	if ((new = (t_elem *)malloc(sizeof(t_elem))) == NULL)
		return (NULL);
	new->value = value;
	new->next = NULL;
	new->prev = NULL;
	return (new);
}

t_elem	*add_elem(t_elem *list, int value)
{
	t_elem *new;

	new = new_elem(value);
	if (new)
	{
		if (list)
			list->next = new;
		list = new;	
	}
	return (list);
}
