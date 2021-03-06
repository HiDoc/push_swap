/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmadura <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/22 12:47:08 by fmadura           #+#    #+#             */
/*   Updated: 2018/01/15 15:55:56 by fmadura          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include "libft.h"
# include <stdio.h>

typedef struct	s_elem
{
	int				value;
	struct s_elem	*next;
	struct s_elem	*prev;
}				t_elem;
t_elem			*new_elem(int value);
t_elem			*add_elem(t_elem *list, int value);

typedef struct	s_stack
{
	t_elem			*first;
	t_elem			*last;
	size_t			size;
}				t_stack;
t_stack			*stack_new(void);
void			stack_print(t_stack *s, t_stack *s2);

void			swap_a(t_stack *a);
void			rota_a(t_stack *a);
void			reve_a(t_stack *a);

void			swap_b(t_stack *b);
void			rota_b(t_stack *b);
void			reve_b(t_stack *b);

void			push_a(t_stack *a, t_stack *b);
void			push_b(t_stack *b, t_stack *a);
void			swap_s(t_stack *a, t_stack *b);
void			rota_r(t_stack *a, t_stack *b);
void			reve_r(t_stack *a, t_stack *b);

int				is_sorted(t_stack *a);
int				cmp_elem(t_elem *e, t_elem *e2);
#endif
