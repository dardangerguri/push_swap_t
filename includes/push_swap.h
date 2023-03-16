/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgerguri <dgerguri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 16:21:39 by dgerguri          #+#    #+#             */
/*   Updated: 2023/03/15 18:08:48 by dgerguri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdio.h>
# include <limits.h>
# include "../libft/includes/libft.h"

typedef struct s_stack
{
	int				content;
	int				index;
	int				position;
	struct s_stack	*next;
}				t_stack;

int		ft_is_number(char **argv);
void	ft_error(t_stack **a_stack, t_stack **b_stack);
t_stack	*filling_stack(char **argv);
int		stack_size(t_stack *a_stack);
void	indexing_the_stack(t_stack *a_stack, int size_of_stack);
void	sa(t_stack	**a_stack);
void	sb(t_stack	**b_stack);
void	ss(t_stack	**a_stack, t_stack **b_stack);
void	pa(t_stack **a_stack, t_stack **b_stack);
void	pb(t_stack **a_stack, t_stack **b_stack);
void	ra(t_stack **a_stack);
void	rb(t_stack **a_stack);
void	rr(t_stack **a_stack, t_stack **b_stack);
void	rra(t_stack **a_stack);
void	rrb(t_stack **a_stack);
void	rrr(t_stack **a_stack, t_stack **b_stack);
void	sorting_for_three(t_stack **a_stack);
void	sorting(t_stack **a_stack, t_stack **b_stack);
int		get_highest_index(t_stack *a_stack);
t_stack	*get_last_node(t_stack *lst);
t_stack	*new_stack_node(int content);
void	add_node_end(t_stack **lst, t_stack *new);
void	add_node_front(t_stack **lst, t_stack *new);
int		get_highest_index_position(t_stack *stack, int highest_index);
void	free_stack(t_stack **stack);
void	free_string(char **str);

#endif
