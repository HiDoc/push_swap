/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmadura <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/22 13:11:31 by fmadura           #+#    #+#             */
/*   Updated: 2018/01/12 16:21:47 by fmadura          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	initialize(int argc, char **argv, t_stack *s1)
{
	t_elem	*tmp;
	int		count;

	count = 1;
	if ((tmp = new_elem(ft_atoi(argv[count]))) == NULL)
		return ;
	s1->first = tmp;
	s1->size = 1;
	count++;
	while (count < argc)
	{
		tmp->next = new_elem(ft_atoi(argv[count]));
		tmp->next->prev = tmp;
		tmp = tmp->next;
		(s1->size)++;
		count++;
	}
	tmp->next = NULL;
	s1->last = tmp;
}

int			main(int argc, char **argv)
{
	t_stack	*s1;
	t_stack *s2;

	if (argc > 1)
	{
		if (((s1 = stack_new()) == NULL)
		|| ((s2 = stack_new()) == NULL))
			return (1);
		initialize(argc, argv, s1);
	}
	return (0);
}
