/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doberyn <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/22 14:43:48 by doberyn           #+#    #+#             */
/*   Updated: 2022/03/09 14:25:05 by smdyan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>
# include "libft.h"

typedef struct s_data
{
	int			a[10000];
	int			count_element;
}				t_data;

typedef struct s_stack
{
	int				data;
	int				step;
	int				rotate;
	struct s_stack	*next;
}				t_stack;

typedef struct s_stacks
{
	int			count_a;
	int			count_b;
	int			min;
	int			max;
	int			med;
	t_stack		*a;
	t_stack		*b;
}				t_stacks;

typedef struct s_steps
{
	int			count_a;
	int			count_b;
	int			dest_a;
	int			dest_b;
}				t_steps;

int		ft_only_spaces(const char *str);
int		ft_is_sorted(t_data *new);
void	ft_rrr(t_stacks *s, int i);
int		ft_validation(int argc, char **argv);
void	ft_duplicate_check(t_data *new, t_stacks *stacks);
void	ft_array_separation(int argc, char **argv, t_data *new);
void	ft_stacking(t_data *new, int *buff, int count);
void	ft_init_stack(t_data *new, t_stacks *stacks);
void	ft_free_stack(t_stacks *stacks);
void	ft_sort(t_stacks *stacks);
void	ft_null(t_stacks *stacks, t_data *new);
void	ft_quick_sort(int *array, int start, int end);
int		ft_partition(int *array, int start, int end);
void	ft_global_sort(t_stacks *stacks);
int		ft_find_place(t_stacks *s, t_stack *b, t_steps *steps, int min);
int		ft_count_to_min(t_stack *a, int min);

void	ft_ra(t_stack **a, int i);
void	ft_rb(t_stack **b, int i);
void	ft_rr(t_stacks *s, int i);
void	ft_rra(t_stack **a, int i);
void	ft_rrb(t_stack **b, int i);
void	ft_sa(t_stack *a, int i);
void	ft_sb(t_stack *a, int i);
void	ft_ss(t_stacks *s, int i);
void	ft_pa(t_stacks *s, int i);
void	ft_pb(t_stacks *s, int i);

int		ft_stack_sorted(t_stacks *s);
void	ft_read_action(t_stacks *s);
void	ft_action_processing(char *line, t_stacks *s);
void	ft_error(void);
int		countword(char const *s);
#endif
