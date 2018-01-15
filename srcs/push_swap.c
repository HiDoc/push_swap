/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmadura <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/22 13:11:31 by fmadura           #+#    #+#             */
/*   Updated: 2018/01/15 15:55:29 by fmadura          ###   ########.fr       */
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

static void	ft_algo(t_stack *a, t_stack *b)
{
	int count;
	size_t size = a->size;

	count = 0;
	while (!(is_sorted(a)))
	{
		if (a->first)
			count += a->first->value;
		if (count % 11 == 0)
			swap_a(a);
		else if (count % 10 == 0)
			rota_a(a);
		else if (count % 9 == 0)
			reve_a(a);
		else if (count % 8 == 0)
			swap_b(b);
		else if (count % 7 == 0)
			rota_b(b);
		else if (count % 6 == 0)
			reve_b(b);
		else if (count % 5 == 0)
			push_a(a, b);
		else if (count % 4 == 0)
			push_b(b, a);
		else if (count % 3 == 0)
			swap_s(a, b);
		else if (count % 2 == 0)
			rota_r(a, b);
		else
			reve_r(a, b);	
	}
	if (a->size != size)
		ft_algo(a, b);
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
		ft_algo(s1, s2);
		stack_print(s1, s2);
	}
	return (0);
}
