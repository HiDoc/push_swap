/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reve.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmadura <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/22 13:09:34 by fmadura           #+#    #+#             */
/*   Updated: 2018/01/07 18:31:59 by fmadura          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static t_stack	*reve(t_stack *x)
{
	t_elem	*first;

	first = NULL;
	if (x->size > 2)
	{
		x->first[x->size - 2].next = NULL;
		x->last->next = x->first;	
		x->first = x->last;
	}
	else
		swap_a(*x);
	return (x);
}

t_stack		*reve_a(t_stack *a)
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
