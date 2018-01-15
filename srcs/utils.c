/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmadura <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/15 14:55:47 by fmadura           #+#    #+#             */
/*   Updated: 2018/01/15 15:51:13 by fmadura          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int 	is_sorted(t_stack *s)
{
	t_elem *start;

	start = s->first;
	while (start)
	{
		if (start->next && start->value > start->next->value)
			return (0);
		start = start->next;	
	}
	return (1);
}

int		cmp_elem(t_elem *e1, t_elem *e2)
{
	if (e1 == NULL || e2 == NULL)
		return (0);
	return (e1->value > e2->value ? 1 : -1);
}
