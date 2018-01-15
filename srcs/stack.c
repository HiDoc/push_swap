/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmadura <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/07 16:22:50 by fmadura           #+#    #+#             */
/*   Updated: 2018/01/15 15:56:51 by fmadura          ###   ########.fr       */
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

void	stack_print(t_stack *s, t_stack *s2)
{
	t_elem	*tmp2;
	t_elem	*tmp;

	tmp = s->first;
	tmp2 = s2->first;
	while (tmp != NULL || tmp2 != NULL)
	{
		if (tmp != NULL)
		{
			ft_putnbr(tmp->value);
			tmp = tmp->next;
		}
		else
			ft_putstr("(null)");
		ft_putstr("      ");
		if (tmp2 != NULL)
		{
			ft_putnbr(tmp->value);
			tmp2 = tmp2->next;
		}
		else
			ft_putendl("(null)");
	}
}
