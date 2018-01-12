/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmadura <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/22 13:05:06 by fmadura           #+#    #+#             */
/*   Updated: 2018/01/08 15:25:19 by fmadura          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	swap(t_stack *x)
{
	t_elem	*first;
	t_elem	*second;

	first = NULL;
	second = NULL;
	if (x->size > 2)
	{
		first = x->first;
		second = first->next;
		second->next->prev = first;
		first->next = second->next;
		first->prev = second;
		second->next = first;
		second->prev = NULL;
		x->first = second;
	}
}

void		swap_a(t_stack *a)
{
	swap(a);
}

void		swap_b(t_stack *b)
{
	swap(b);
}

void		swap_s(t_stack *a, t_stack *b)
{
	swap(a);
	swap(b);
}
