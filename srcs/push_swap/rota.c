/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rota.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmadura <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/22 13:07:53 by fmadura           #+#    #+#             */
/*   Updated: 2017/12/22 14:30:33 by fmadura          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	rota(t_stack x)
{
	t_elem *tmp;

	if (x.size > 1)
	{
		tmp = x.first->next;
		x.last->next = x.first;
		x.first->next = NULL;
		x.first = tmp;
	}
}
void		rota_a(t_stack a)
{
	rota(a);
}
void		rota_b(t_stack b)
{
	rota(b);
}
void		rota_r(t_stack a, t_stack b)
{
	rota(a);
	rota(b);
}
