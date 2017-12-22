/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmadura <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/22 13:41:43 by fmadura           #+#    #+#             */
/*   Updated: 2017/12/22 14:34:54 by fmadura          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*new_stack(char **tab)
{
	t_stack *new;
	t_elem	*tmp;
	int 	count;

	if ((new = (t_stack *)malloc(sizeof(t_stack))) == NULL)
		return (NULL);
	count = 0;
	new->first = NULL;
	new->last = NULL;
	if (tab[count])
	{
		tmp = new_elem(ft_itoa(tab[count]));
		new->first = tmp;
		count++;
	}
	while (tab[count])
	{
		tmp = add_elem(tmp, ft_itoa(tab[count]));
		count++;
	}
	if (tab[0] && tab[1])
		new->last = tmp;
	new->size = count;
	return (new);
}
