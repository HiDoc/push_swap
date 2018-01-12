/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rota.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmadura <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/22 13:07:53 by fmadura           #+#    #+#             */
/*   Updated: 2018/01/08 15:23:44 by fmadura          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	rota(t_stack *x)
{
	t_elem *tmp;

	if (x->size > 1)
	{
		tmp = x->first;
		x->first = tmp->next;
		x->first->prev = NULL;
		x->last->next = tmp;
		tmp->prev = x->last;
		tmp->next = NULL;
		x->last = tmp;
	}
}

void		rota_a(t_stack *a)
{
	rota(a);
}

void		rota_b(t_stack *b)
{
	rota(b);
}

void		rota_r(t_stack *a, t_stack *b)
{
	rota(a);
	rota(b);
}
