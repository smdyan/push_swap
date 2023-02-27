/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cmd_rr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smdyan <smdyan@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/06 17:17:33 by smdyan            #+#    #+#             */
/*   Updated: 2022/03/06 17:17:59 by smdyan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_rra(t_stack **a, int i)
{
	t_stack		*first_list;
	t_stack		*rotate_list;
	t_stack		*penultimate_list;

	if ((*a) == NULL || (*a)->next == NULL)
		return ;
	first_list = *a;
	penultimate_list = *a;
	while (penultimate_list->next->next != NULL)
		penultimate_list = penultimate_list->next;
	rotate_list = penultimate_list->next;
	penultimate_list->next = NULL;
	rotate_list->next = first_list;
	*a = rotate_list;
	if (i == 1)
		write(1, "rra\n", 4);
}

void	ft_rrb(t_stack **b, int i)
{
	t_stack		*first_list;
	t_stack		*rotate_list;
	t_stack		*penultimate_list;

	if ((*b) == NULL || (*b)->next == NULL)
		return ;
	first_list = *b;
	penultimate_list = *b;
	while (penultimate_list->next->next != NULL)
		penultimate_list = penultimate_list->next;
	rotate_list = penultimate_list->next;
	penultimate_list->next = NULL;
	rotate_list->next = first_list;
	*b = rotate_list;
	if (i == 1)
		write(1, "rrb\n", 4);
}

void	ft_rrr(t_stacks *s, int i)
{
	ft_rra(&s->a, 0);
	ft_rrb(&s->b, 0);
	if (i == 1)
		write(1, "rrr\n", 4);
}
