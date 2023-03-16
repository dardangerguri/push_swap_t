/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgerguri <dgerguri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 17:31:01 by dgerguri          #+#    #+#             */
/*   Updated: 2023/03/15 18:52:52 by dgerguri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	assign_position(t_stack **stack)
{
	t_stack	*temporary;
	int		size_of_stack;
	int		i;

	temporary = *stack;
	size_of_stack = get_highest_index(*stack);
	i = 1;
	while (temporary != NULL && i <= size_of_stack)
	{
		temporary->position = i;
		temporary = temporary->next;
		i++;
	}
}

// void	keep_three_largest(t_stack **a_stack, t_stack **b_stack)
// {
// 	int	size_of_stack;
// 	int	sent_to_b_stack;
// 	int	second;
// 	int	i;

// 	size_of_stack = get_highest_index(*a_stack);
// 	sent_to_b_stack = 0;
// 	i = 0;
// 	assign_position(a_stack);
// 	while (i < size_of_stack && sent_to_b_stack < size_of_stack - 3)
// 	{
// 		if ((*a_stack)->index <= size_of_stack - 3)
// 		{
// 			pb(a_stack, b_stack);
// 			sent_to_b_stack++;
// 		}
// 		else
// 			ra(a_stack);
// 		i++;
// 	}
// }

void	keep_three_largest(t_stack **a_stack, t_stack **b_stack)
{
	int	size_of_stack;
	int	sent_to_b_stack;
	int	second;
	int	i;

	size_of_stack = get_highest_index(*a_stack);
	sent_to_b_stack = 0;
	i = 0;
	while (size_of_stack > 6 && i < size_of_stack)
	{
		if ((*a_stack)->index <= ((size_of_stack / 2)))
		{
			pb(a_stack, b_stack);
			sent_to_b_stack++;
		}
		else
			ra(a_stack);
		i++;
	}
	second = (size_of_stack - sent_to_b_stack);
	i = 0;
	while (second > 3)
	{
		if ((*a_stack)->index <= size_of_stack - 3)
		{
			pb(a_stack, b_stack);
			second--;
		}
		else
			ra(a_stack);
	}
}
	// while (*a_stack != NULL)
	// {
	// 	printf("A is %d\n, index: %d\n", (*a_stack)->content, (*a_stack)->index);
	// 	*a_stack = (*a_stack)->next;
	// }
	// while (*b_stack != NULL)
	// {
	// 	printf("B is %d\n, index: %d\n", (*b_stack)->content, (*b_stack)->index);
	// 	*b_stack = (*b_stack)->next;
	// }
// }


void	position_of_node(t_stack **stack)
{
	t_stack	*temporary;
	int		highest_index;
	int		highest_index_position;
	int		size_of_stack;
	int		i;

	temporary = *stack;
	highest_index = get_highest_index(*stack);
	size_of_stack = stack_size(*stack);
	highest_index_position = get_highest_index_position(*stack, highest_index);
	// printf("size %d\n", size_of_stack);
	i = 1;
	// printf("Highest_index %d, highest_index_position%d\n", highest_index, highest_index_position);
	if (temporary != NULL)
	{
		while (highest_index_position <= highest_index / 2 && i < highest_index_position)
		{
			rb(stack);
			i++;
		}
		i = 0;
		while (highest_index != 1 && highest_index_position > highest_index / 2 && i < size_of_stack - highest_index_position + 1)
		{
			rrb(stack);
			i++;
		}
	}
}


void	sorting(t_stack **a_stack, t_stack **b_stack)
{
	keep_three_largest(a_stack, b_stack);
	sorting_for_three(a_stack);
	while (*b_stack != NULL)
	{
		assign_position(b_stack);
		position_of_node(b_stack);
		pa(a_stack, b_stack);
	}
	// assign_position(a_stack);
	// while (*a_stack != NULL)
	// {
	// 	printf("A is %d, index: %d, position: %d\n", (*a_stack)->content, (*a_stack)->index, (*a_stack)->position);
	// 	*a_stack = (*a_stack)->next;
	// }
	// 	while (*b_stack != NULL)
	// {
	// 	printf("B is %d, index: %d, position: %d\n", (*b_stack)->content, (*b_stack)->index, (*b_stack)->position);
	// 	*b_stack = (*b_stack)->next;
	// }
}







// // SAVING IT FOR THE END


// void	assign_position(t_stack **stack)
// {
// 	t_stack	*temporary;
// 	int		size_of_stack;
// 	int		i;

// 	temporary = *stack;
// 	size_of_stack = get_highest_index(*stack);
// 	i = 1;
// 	while (temporary != NULL && i <= size_of_stack)
// 	{
// 		temporary->position = i;
// 		temporary = temporary->next;
// 		i++;
// 	}
// }

// // void	keep_three_largest(t_stack **a_stack, t_stack **b_stack)
// // {
// // 	int	size_of_stack;
// // 	int	sent_to_b_stack;
// // 	int	second;
// // 	int	i;

// // 	size_of_stack = get_highest_index(*a_stack);
// // 	sent_to_b_stack = 0;
// // 	i = 0;
// // 	assign_position(a_stack);
// // 	while (i < size_of_stack && sent_to_b_stack < size_of_stack - 3)
// // 	{
// // 		if ((*a_stack)->index <= size_of_stack - 3)
// // 		{
// // 			pb(a_stack, b_stack);
// // 			sent_to_b_stack++;
// // 		}
// // 		else
// // 			ra(a_stack);
// // 		i++;
// // 	}
// // }

// void	keep_three_largest(t_stack **a_stack, t_stack **b_stack)
// {
// 	int	size_of_stack;
// 	int	sent_to_b_stack;
// 	int	second;
// 	int	i;

// 	size_of_stack = get_highest_index(*a_stack);
// 	sent_to_b_stack = 0;
// 	i = 0;
// 	while (size_of_stack > 6 && i < size_of_stack)
// 	{
// 		if ((*a_stack)->index <= ((size_of_stack / 2)) + 1)
// 		{
// 			pb(a_stack, b_stack);
// 			sent_to_b_stack++;
// 		}
// 		else
// 			ra(a_stack);
// 		i++;
// 	}
// 	second = (size_of_stack - sent_to_b_stack);
// 	i = 0;
// 	while (second > 3)
// 	{
// 		if ((*a_stack)->index <= size_of_stack - 3)
// 		{
// 			pb(a_stack, b_stack);
// 			second--;
// 		}
// 		else
// 			ra(a_stack);
// 	}
// }
// 	// while (*a_stack != NULL)
// 	// {
// 	// 	printf("A is %d\n, index: %d\n", (*a_stack)->content, (*a_stack)->index);
// 	// 	*a_stack = (*a_stack)->next;
// 	// }
// 	// while (*b_stack != NULL)
// 	// {
// 	// 	printf("B is %d\n, index: %d\n", (*b_stack)->content, (*b_stack)->index);
// 	// 	*b_stack = (*b_stack)->next;
// 	// }
// // }


// void	position_of_node(t_stack **stack)
// {
// 	t_stack	*temporary;
// 	int		highest_index;
// 	int		highest_index_position;
// 	int		size_of_stack;
// 	int		i;

// 	temporary = *stack;
// 	highest_index = get_highest_index(*stack);
// 	size_of_stack = stack_size(*stack);
// 	highest_index_position = get_highest_index_position(*stack, highest_index);
// 	// printf("size %d\n", size_of_stack);
// 	i = 1;
// 	// printf("Highest_index %d, highest_index_position%d\n", highest_index, highest_index_position);
// 	if (temporary != NULL)
// 	{
// 		while (highest_index_position <= highest_index / 2 && i < highest_index_position)
// 		{
// 			rb(stack);
// 			i++;
// 		}
// 		i = 0;
// 		while (highest_index != 1 && highest_index_position > highest_index / 2 && i < size_of_stack - highest_index_position + 1)
// 		{
// 			rrb(stack);
// 			i++;
// 		}
// 	}
// }


// void	sorting(t_stack **a_stack, t_stack **b_stack)
// {
// 	keep_three_largest(a_stack, b_stack);
// 	sorting_for_three(a_stack);
// 	while (*b_stack != NULL)
// 	{
// 		assign_position(b_stack);
// 		position_of_node(b_stack);
// 		pa(a_stack, b_stack);
// 	}
// 	// assign_position(a_stack);
// 	// while (*a_stack != NULL)
// 	// {
// 	// 	printf("A is %d, index: %d, position: %d\n", (*a_stack)->content, (*a_stack)->index, (*a_stack)->position);
// 	// 	*a_stack = (*a_stack)->next;
// 	// }
// 	// 	while (*b_stack != NULL)
// 	// {
// 	// 	printf("B is %d, index: %d, position: %d\n", (*b_stack)->content, (*b_stack)->index, (*b_stack)->position);
// 	// 	*b_stack = (*b_stack)->next;
// 	// }
// }
