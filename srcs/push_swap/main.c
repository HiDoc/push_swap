/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmadura <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/22 13:11:31 by fmadura           #+#    #+#             */
/*   Updated: 2018/01/07 18:45:01 by fmadura          ###   ########.fr       */
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
			tmp = tmp->next;
			(s1->size)++;
			count++;
		}
		tmp->next = NULL;
		s1->last = tmp;
		stack_print(s1);
		ft_putchar('\n');
		reve_a(s1);
		ft_putendl("\nafter rev");
		stack_print(s1);
		ft_putendl("\nafter swap");
		swap_a(s1);
		stack_print(s1);
	}
	return (0);
}
