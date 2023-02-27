/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smdyan <smdyan@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/06 09:46:37 by smdyan            #+#    #+#             */
/*   Updated: 2022/03/06 19:18:46 by smdyan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	procedure_free(t_data *new, t_stacks *stacks)
{
	free(new);
	free(stacks);
	return (0);
}

int	main(int argc, char **argv)
{
	t_data		*new;
	t_stacks	*stacks;

	if (argc < 2)
		exit(1);
	new = (t_data *)malloc(sizeof(t_data));
	if (!new)
		exit(1);
	stacks = (t_stacks *)malloc(sizeof(t_stacks));
	if (!stacks)
		exit(1);
	ft_null(stacks, new);
	if (ft_validation(argc, argv))
	{
		ft_array_separation(argc, argv, new);
		ft_duplicate_check(new, stacks);
		if (ft_is_sorted(new))
		{
			ft_init_stack(new, stacks);
			ft_sort(stacks);
			ft_free_stack(stacks);
		}
	}
	procedure_free(new, stacks);
	return (0);
}
