/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgerguri <dgerguri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 12:21:06 by dgerguri          #+#    #+#             */
/*   Updated: 2023/03/12 19:32:38 by dgerguri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *str)
{
	int		i;
	long	sign;
	long	result;

	i = 0;
	sign = 1;
	result = 0;
	while ((str[i] > 8 && str[i] < 14) || str[i] == 32)
		i++;
	if (str[i] == 45)
		sign = sign - 2;
	if (str[i] == 43 || str[i] == 45)
		i++;
	while (str[i] != '\0' && str[i] > 47 && str[i] < 58)
	{
		result = result * 10 + str[i] - '0';
		i++;
		if (result < 0)
		{
			if (sign == -1)
				return (0);
			return (-1);
		}
	}
	return (result * sign);
}
