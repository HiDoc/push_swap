/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reve.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmadura <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/22 13:09:34 by fmadura           #+#    #+#             */
/*   Updated: 2017/12/22 14:33:48 by fmadura          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	reve(t_stack x)
{
	t_elem	*tmp;
	int 	count;

	if (x.size > 1)
	{
		count = 0;
		tmp = x.first;
		while (count < x.size - 1)
		{
			tmp = tmp->next;
			count++;
		}
		x.last->next = x.first;
		tmp->next = NULL;
		x.first = x.last;
		x.last = tmp;
	}
}
void		reve_a(t_stack a)
{
	reve(a);
}
void		reve_b(t_stack b)
{
	reve(b);
}
void		reve_r(t_stack a, t_stack b)
{
	reve(a);
	reve(b);
}
