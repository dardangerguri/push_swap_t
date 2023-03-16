/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgerguri <dgerguri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 16:35:04 by dgerguri          #+#    #+#             */
/*   Updated: 2023/03/15 18:24:24 by dgerguri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

// long int	dardan_atoi(const char *str)
// {
// 	long int	nb;
// 	int			isneg;
// 	int			i;

// 	nb = 0;
// 	isneg = 1;
// 	i = 0;
// 	if (str[i] == '+')
// 		i++;
// 	else if (str[i] == '-')
// 	{
// 		isneg *= -1;
// 		i++;
// 	}
// 	while (ft_isdigit(str[i]))
// 	{
// 		nb = (nb * 10) + (str[i] - '0');
// 		i++;
// 	}
// 	return (nb * isneg);
// }

t_stack	*filling_stack(char **argv)
{
	t_stack		*a_stack;
	int			i;
	long int	number;

	a_stack = NULL;
	i = 0;
	number = 1;
	if (ft_strcmp(argv[i], "./push_swap") == 0)
		i++;
	while (argv[i] != NULL)
	{
		number = ft_atoi(argv[i]);
		if ((number < 0 && argv[i][0] != '-') || \
			(number > 0 && argv[i][0] == '-'))
			ft_error(&a_stack, NULL);
		if (number < INT_MIN || number > INT_MAX)
			ft_error(&a_stack, NULL);
		add_node_end(&a_stack, new_stack_node((int)number));
		i++;
	}
	return (a_stack);
}

int	stack_size(t_stack *a_stack)
{
	int	size;

	size = 0;
	if (a_stack == NULL)
		return (0);
	while (a_stack != NULL)
	{
		a_stack = a_stack->next;
		size++;
	}
	return (size);
}
