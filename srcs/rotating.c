/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotating.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgerguri <dgerguri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 16:58:30 by dgerguri          #+#    #+#             */
/*   Updated: 2023/03/10 16:46:42 by dgerguri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	rotating(t_stack **stack)
{
	t_stack	*first_node;
	t_stack	*last_node;

	first_node = *stack;
	(*stack) = (*stack)->next;
	last_node = get_last_node(*stack);
	last_node->next = first_node;
	first_node->next = NULL;
}

void	ra(t_stack **a_stack)
{
	rotating(a_stack);
	ft_putstr_fd("ra\n", 1);
}

void	rb(t_stack **b_stack)
{
	rotating(b_stack);
	ft_putstr_fd("rb\n", 1);
}

void	rr(t_stack **a_stack, t_stack **b_stack)
{
	rotating(a_stack);
	rotating(b_stack);
	ft_putstr_fd("rr\n", 1);
}
