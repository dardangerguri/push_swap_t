/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   indexing.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgerguri <dgerguri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 17:00:39 by dgerguri          #+#    #+#             */
/*   Updated: 2023/03/15 18:13:35 by dgerguri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	indexing_the_stack(t_stack *a_stack, int size_of_stack)
{
	t_stack	*stack;
	t_stack	*highest;
	int		value;

	while (--size_of_stack > 0)
	{
		stack = a_stack;
		value = INT_MIN;
		highest = NULL;
		while (stack)
		{
			// printf("Value: %d, index: %d\n", stack->content, stack->index);
			if (stack->content == INT_MIN && stack->index == 0)
				stack->index = 1;
			if (stack->content > value && stack->index == 0)
			{
				value = stack->content;
				highest = stack;
				stack = a_stack;
			}
			else
				stack = stack->next;
		}
		if (highest != NULL)
			highest->index = size_of_stack;
	}
}
