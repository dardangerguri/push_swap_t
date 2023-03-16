/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgerguri <dgerguri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 19:49:31 by dgerguri          #+#    #+#             */
/*   Updated: 2023/02/09 18:38:37 by dgerguri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	*str;
	char	character;

	i = 0;
	str = (char *)s;
	character = (char)c;
	while (str[i] != character && str[i] != '\0')
		i++;
	if (str[i] == character)
		return (str + i);
	else
		return (NULL);
}
