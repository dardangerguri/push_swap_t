/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgerguri <dgerguri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 14:53:04 by dgerguri          #+#    #+#             */
/*   Updated: 2023/03/15 18:14:06 by dgerguri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	ft_issorted(t_stack *a_stack)
{
	t_stack	*temporary;

	temporary = a_stack;
	while (temporary->next != NULL)
	{
		if (temporary->content > temporary->next->content)
			return (0);
		temporary = temporary->next;
	}
	return (1);
}

int	push_swap(t_stack **a_stack, t_stack **b_stack, int size_of_stack)
{
	if (ft_issorted(*a_stack))
		return (0);
	else if (size_of_stack == 2)
		sa(a_stack);
	else if (size_of_stack == 3)
		sorting_for_three(a_stack);
	else if (size_of_stack > 3)
		sorting(a_stack, b_stack);
	return (0);
}

int	main(int argc, char **argv)
{
	t_stack	*a_stack;
	t_stack	*b_stack;
	int		size_of_stack;

	if (argc < 2)
		return (0);
	if (argc == 2)
		argv = ft_split(argv[1], ' ');
	if (argv[0] == NULL)
	{
		free(argv);
		return (0);
	}
	if (!ft_is_number(argv))
		ft_error(NULL, NULL);
	a_stack = filling_stack(argv);
	b_stack = NULL;
	size_of_stack = stack_size(a_stack);
	if (argc == 2)
		free_string(argv);
	indexing_the_stack(a_stack, size_of_stack + 1);
	push_swap(&a_stack, &b_stack, size_of_stack);
	free_stack(&a_stack);
	free_stack(&b_stack);
	return (0);
}
