/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgerguri <dgerguri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 14:19:04 by dgerguri          #+#    #+#             */
/*   Updated: 2023/03/10 16:45:25 by dgerguri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	pushing(t_stack **source, t_stack **destination)
{
	t_stack	*next;

	if (*source != NULL)
	{
		next = (*source)->next;
		add_node_front(destination, *source);
		*source = next;
	}
}

void	pa(t_stack **a_stack, t_stack **b_stack)
{
	pushing(b_stack, a_stack);
	ft_putstr_fd("pa\n", 1);
}

void	pb(t_stack **a_stack, t_stack **b_stack)
{
	pushing(a_stack, b_stack);
	ft_putstr_fd("pb\n", 1);
}
