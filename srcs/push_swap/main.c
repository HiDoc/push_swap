/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmadura <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/22 13:11:31 by fmadura           #+#    #+#             */
/*   Updated: 2018/01/08 13:49:11 by fmadura          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		main(int argc, char **argv)
{
	t_stack	*s1;
	t_stack *s2;
	t_elem	*tmp;
	int 	count;

	if (argc > 1)
	{
		count = 1;
		if (((s1 = stack_new()) == NULL)	
		|| ((s2 = stack_new()) == NULL))
			return (1);
		if ((tmp = new_elem(ft_atoi(argv[count]))) == NULL)
			return (1);
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
		
		ft_putendl("stack 1 :");
		stack_print(s1);
		
		reve_a(s1);	
		ft_putendl("\nafter rev");
		stack_print(s1);
		
		swap_a(s1);
		ft_putendl("\nafter swap");
		stack_print(s1);
		
		rota_a(s1);
		ft_putendl("\nafter rota");
		stack_print(s1);
		
		push_a(s2, s1);
		push_a(s2, s1);
		push_a(s2, s1);
		push_a(s1, s2);
		push_a(s1, s2);
		push_a(s1, s2);
		swap_a(s1);
		reve_a(s1);
		ft_putendl("\nafter push");
		ft_putendl("\nstack 1 :");
		stack_print(s1);
		ft_putendl("\nstack 2 :");
		stack_print(s2);
}
	return (0);
}
