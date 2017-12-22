/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmadura <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/22 13:05:06 by fmadura           #+#    #+#             */
/*   Updated: 2017/12/22 14:28:02 by fmadura          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	swap(t_stack x)
{
	t_elem	*tmp;

	if (x.size > 1)
	{
		if (x.size == 2)
		{
			tmp = x.first;
			x.first = x.last;
			x.last = tmp;
			x.last->next = NULL;
			x.first->next = x.last;
		}
		else
		{
			tmp = x.first;
			x.first = x.first->next;
			tmp->next = x.first->next->next;
			x.first->next = tmp;
		}
	}
}

void		swap_a(t_stack a)
{
	swap(a);
}

void		swap_b(t_stack b)
{
	swap(b);
}
void		swap_s(t_stack a, t_stack b)
{
	swap(a);
	swap(b);
}
