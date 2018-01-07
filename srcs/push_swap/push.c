/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmadura <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/22 13:06:41 by fmadura           #+#    #+#             */
/*   Updated: 2018/01/07 16:17:31 by fmadura          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	push(t_stack x, t_stack y)
{
	t_elem *tmp;

	if (y.first != NULL)
	{
		tmp = y.first;
		y.first = y.first->next;
		tmp->next = x.first;
		x.first = tmp;
		y.size -= 1;
		x.size += 1;	
	}
}
void		push_a(t_stack a, t_stack b)
{
	push(a, b);
}
void		push_b(t_stack b, t_stack a)
{
	push(b, a);
}
