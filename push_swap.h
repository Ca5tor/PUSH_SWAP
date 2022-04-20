/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltacos <ltacos@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/20 21:54:11 by ltacos            #+#    #+#             */
/*   Updated: 2022/03/25 13:32:36 by ltacos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>

typedef struct s_stack
{
	int				value;
	int				length;
	int				min;
	int				max;
	int				mid;
	int				*stack;
	struct s_stack	*next;
	struct s_stack	*prev;
}					t_stack;

t_stack	*stackcpy(t_stack *a);
void	swap_elem(t_stack *stack, int a, int b);
int		mid(t_stack *a);
t_stack	*stack_init(int length);

int		find_max(t_stack *a);
int		find_min(t_stack *a);
int		index_max(t_stack *a);
int		last_v(t_stack *a);

int		is_previous(t_stack **a, t_stack **b, int sub, int main);
int		love_norm(t_stack *tmp, t_stack*buf, int main, int min);

int		swap(t_stack **stack, int flag);
void	sswap(t_stack **a, t_stack **b);
int		push(t_stack **a, t_stack **b, int flag);
int		rev_rotate(t_stack **stack, int flag);
void	rrev_rotate(t_stack **a, t_stack **b);
int		rotate(t_stack **stack, int flag);
void	rrotate(t_stack **a, t_stack **b);

void	sort_three(t_stack **a);
void	sort_four(t_stack **a, t_stack **b);
void	sort_five(t_stack **a, t_stack **b);
int		is_sorted(t_stack **a);

void	half_to_b(t_stack **a, t_stack **b);
void	kind_of_sel_sort(t_stack **a, t_stack **b);
void	half_to_a(t_stack **a, t_stack **b);
void	part_to_b(t_stack **a, t_stack **b, int div);

void	add_back(t_stack *lst, int value);
t_stack	*new_s(int num);
int		stack_length(t_stack *lst);
int		is_sort(t_stack **a, t_stack **b);
int		is_duplicate(t_stack *a);

void	free_s(t_stack **a);
void	min_init(t_stack *a);
void	max_init(t_stack *a);

void	error(void);
void	ft_putstr(char *s);
int		ft_atoi_n(const char *str);
int		not_num(const char *str);

t_stack	*arg_initial(int argc, char **argv);
void	return_back(t_stack **a, t_stack **b);
void	sorting(t_stack *a, t_stack *b);

#endif