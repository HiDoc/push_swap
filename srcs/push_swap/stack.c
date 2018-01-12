/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmadura <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/07 16:22:50 by fmadura           #+#    #+#             */
/*   Updated: 2018/01/08 15:26:01 by fmadura          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*stack_new(void)
{
	t_stack	*new;

	if ((new = (t_stack *)malloc(sizeof(t_stack))) == NULL)
		return (NULL);
	new->first = NULL;
	new->last = NULL;
	new->size = 0;
	return (new);
}

void	stack_print(t_stack *s)
{
	t_elem	*tmp;

	tmp = s->first;
	while (tmp != NULL)
	{
		ft_putnbr(tmp->value);
		tmp = tmp->next;
		ft_putchar('\n');
	}
}
