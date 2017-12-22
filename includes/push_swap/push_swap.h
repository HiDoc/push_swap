/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmadura <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/22 12:47:08 by fmadura           #+#    #+#             */
/*   Updated: 2017/12/22 14:37:20 by fmadura          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include "libft.h"

typedef struct	s_elem
{
	int				value;
	struct s_list	*next;
}				t_elem;
t_elem			*new_elem(int value);
t_elem			*add_elem(t_elem *list, int value);

typedef struct	s_stack
{
	t_elem			*first;
	t_elem			*last;
	size_t			size;
}				t_stack;
t_stack			*new_stack(char **tab);

void			swap_a(t_stack a);
void			rota_a(t_stack a);
void			reve_a(t_stack a);

void			swap_b(t_stack b);
void			rota_b(t_stack b);
void			reve_b(t_stack b);

void			push_a(t_stack a, t_stack b);
void			push_b(t_stack b, t_stack a);
void			swap_s(t_stack a, t_stack b);
void			rota_r(t_stack a, t_stack b);
void			reve_r(t_stack a, t_stack b);
#endif
