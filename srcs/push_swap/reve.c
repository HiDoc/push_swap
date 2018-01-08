/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reve.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmadura <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/22 13:09:34 by fmadura           #+#    #+#             */
/*   Updated: 2018/01/08 13:36:34 by fmadura          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	reve(t_stack *x)
{
	t_elem	*last;

	last = NULL;
	if (x->size > 2)
	{
		last = x->last->prev;
		x->last->next = x->first;
		x->first->prev = x->last;
		x->first = x->last;
		x->first->prev = NULL;
		x->last = last;
		last->next = NULL;
	}
	else
		swap_a(x);
}

void		reve_a(t_stack *a)
{
	return (reve(a));
}

void		reve_b(t_stack *b)
{
	reve(b);
}

void		reve_r(t_stack *a, t_stack *b)
{
	reve(a);
	reve(b);
}
