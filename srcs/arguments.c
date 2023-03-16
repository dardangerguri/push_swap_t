/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   arguments.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgerguri <dgerguri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 14:51:04 by dgerguri          #+#    #+#             */
/*   Updated: 2023/03/14 16:51:47 by dgerguri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

static int	duplicates(char **argv)
{
	int	i;
	int	j;

	i = 0;
	if (ft_strcmp(argv[i], "./push_swap") == 0)
		i++;
	while (argv[i] != '\0')
	{
		j = 0;
		if (ft_strcmp(argv[0], "./push_swap") == 0)
			j++;
		while (argv[j] != '\0')
		{
			if (argv[i] != argv[j] && ft_strcmp(argv[i], argv[j]) == 0)
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

static int	ft_is_zero(char *argv)
{
	int	i;

	i = 0;
	while (argv[i] != '\0')
	{
		if (argv[i] != '0')
			return (0);
		i++;
	}
	return (1);
}

static int	ft_arg_is_number(char *argv)
{
	int	i;

	i = 0;
	if ((argv[i] == '+' || argv[i] == '-') && argv[i + 1] != '\0')
		i++;
	while (argv[i] && ft_isdigit(argv[i]))
		i++;
	if (argv[i] != '\0' && !ft_isdigit(argv[i]))
		return (0);
	return (1);
}

int	ft_is_number(char **argv)
{
	int	i;
	int	zero;

	i = 0;
	zero = 0;
	if (ft_strcmp(argv[i], "./push_swap") == 0)
		i++;
	while (argv[i] != '\0')
	{
		if (!ft_arg_is_number(argv[i]))
			return (0);
		if (ft_is_zero(argv[i]))
			zero++;
		i++;
	}
	if (zero > 1)
		return (0);
	if (!duplicates(argv))
		return (0);
	return (1);
}
