/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reversing.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgerguri <dgerguri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 19:11:25 by dgerguri          #+#    #+#             */
/*   Updated: 2023/03/10 16:46:02 by dgerguri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	reversing(t_stack **stack)
{
	t_stack	*first_node;
	t_stack	*last_node;

	first_node = *stack;
	last_node = get_last_node(*stack);
	while ((*stack)->next->next != NULL)
		(*stack) = (*stack)->next;
	(*stack)->next = NULL;
	last_node->next = first_node;
	(*stack) = last_node;
}

void	rra(t_stack **a_stack)
{
	reversing(a_stack);
	ft_putstr_fd("rra\n", 1);
}

void	rrb(t_stack **b_stack)
{
	reversing(b_stack);
	ft_putstr_fd("rrb\n", 1);
}

void	rrr(t_stack **a_stack, t_stack **b_stack)
{
	reversing(a_stack);
	reversing(b_stack);
	ft_putstr_fd("rrr\n", 1);
}
