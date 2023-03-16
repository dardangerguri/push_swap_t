/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swapping.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgerguri <dgerguri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 18:26:03 by dgerguri          #+#    #+#             */
/*   Updated: 2023/03/08 20:24:16 by dgerguri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	swapping(t_stack *stack)
{
	int	temporary;

	if (stack != NULL)
	{
		temporary = stack->content;
		stack->content = stack->next->content;
		stack->next->content = temporary;
		temporary = stack->index;
		stack->index = stack->next->index;
		stack->next->index = temporary;
	}
}

void	sa(t_stack	**a_stack)
{
	swapping(*a_stack);
	ft_putstr_fd("sa\n", 1);
}

void	sb(t_stack	**b_stack)
{
	swapping(*b_stack);
	ft_putstr_fd("sa\n", 1);
}

void	ss(t_stack	**a_stack, t_stack **b_stack)
{
	swapping(*a_stack);
	swapping(*b_stack);
	ft_putstr_fd("sa\n", 1);
}
