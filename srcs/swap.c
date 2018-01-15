/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmadura <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/22 13:05:06 by fmadura           #+#    #+#             */
/*   Updated: 2018/01/15 16:01:45 by fmadura          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	swap(t_stack *x)
{
	t_elem	*first;
	t_elem	*second;
	int		tmp;

	first = NULL;
	second = NULL;
	if (x->size > 1)
	{
		first = x->first;
		second = x->first->next;
		tmp = first->value;
		first->value = second->value;
		second->value = tmp;	
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
