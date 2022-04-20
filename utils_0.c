/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_0.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltacos <ltacos@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 22:22:59 by ltacos            #+#    #+#             */
/*   Updated: 2022/03/25 00:19:56 by ltacos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	free_s(t_stack **a)
{
	t_stack	*tmp;

	if (!(*a))
		return ;
	while (*a != NULL)
	{
		tmp = *a;
		*a = (*a)->next;
		free(tmp);
	}
}

void	min_init(t_stack *a)
{
	int	min;

	min = find_min(a);
	while (a)
	{
		a->min = min;
		a = a->next;
	}
}

void	max_init(t_stack *a)
{
	int	max;

	max = find_max(a);
	while (a)
	{
		a->max = max;
		a = a->next;
	}
}
