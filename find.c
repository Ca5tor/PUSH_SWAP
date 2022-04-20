/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltacos <ltacos@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 22:29:28 by ltacos            #+#    #+#             */
/*   Updated: 2022/03/24 22:29:45 by ltacos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	find_max(t_stack *a)
{
	int	max;

	max = a->value;
	while (a)
	{
		if (a->value > max)
			max = a->value;
		a = a->next;
	}
	return (max);
}

int	find_min(t_stack *a)
{
	int	min;

	if (!a)
		return (0);
	min = a->value;
	while (a != NULL)
	{
		if (a->value < min)
			min = a->value;
		a = a->next;
	}
	return (min);
}

int	index_max(t_stack *a)
{
	int	max;
	int	i;

	max = find_max(a);
	i = 0;
	while (a->value != max)
	{
		i++;
		a = a->next;
	}
	return (i);
}

int	last_v(t_stack *a)
{
	if (a == 0)
		return (0);
	while (a->next)
		a = a->next;
	return (a->value);
}
