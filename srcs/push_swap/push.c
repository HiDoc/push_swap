/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmadura <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/22 13:06:41 by fmadura           #+#    #+#             */
/*   Updated: 2018/01/08 13:54:49 by fmadura          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	push_x(t_elem *tmp, t_stack *x)
{
	if (x->size > 0)
	{
		tmp->next = x->first;
		x->first->prev = tmp;
		x->first = tmp;
		x->first->prev = NULL;
	}
	else
	{
		x->first = tmp;
		x->last = tmp;
		x->first->prev = NULL;
		x->first->next = NULL;
	}
}

static void	push_y(t_stack *y)
{
	if (y->size == 1)
	{
		y->first = NULL;
		y->last = NULL;
	}
	else
	{
		y->first = y->first->next;
		y->first->prev = NULL;
	}
}

static void	push(t_stack *x, t_stack *y)
{
	t_elem *tmp;

	if (y->size > 0)
	{
		tmp = y->first;
		push_y(y);
		push_x(tmp, x);
		y->size -= 1;
		x->size += 1;	
	}
}

void		push_a(t_stack *a, t_stack *b)
{
	push(a, b);
}

void		push_b(t_stack *b, t_stack *a)
{
	push(b, a);
}
