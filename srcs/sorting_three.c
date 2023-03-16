/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting_three.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgerguri <dgerguri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 13:33:52 by dgerguri          #+#    #+#             */
/*   Updated: 2023/03/15 18:16:00 by dgerguri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	get_highest_index(t_stack *stack)
{
	int	i;

	i = stack->index;
	while (stack != NULL)
	{
		if (stack->index > i)
			i = stack->index;
		stack = stack->next;
	}
	return (i);
}

int	get_highest_index_position(t_stack *stack, int highest_index)
{
	int	i;

	i = stack->position;
	while (stack != NULL)
	{
		if (stack->index == highest_index)
			i = stack->position;
		stack = stack->next;
	}
	return (i);
}

void	sorting_for_three(t_stack **a_stack)
{
	int	highest_index;

	highest_index = get_highest_index(*a_stack);
	if ((*a_stack)->index == highest_index)
		ra(a_stack);
	if ((*a_stack)->next->index == highest_index)
		rra(a_stack);
	if ((*a_stack)->index > (*a_stack)->next->index)
		sa(a_stack);
}
