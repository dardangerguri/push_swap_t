/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgerguri <dgerguri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 20:22:41 by dgerguri          #+#    #+#             */
/*   Updated: 2023/02/09 18:38:45 by dgerguri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*str;
	char	character;
	int		i;

	str = (char *)s;
	character = (char)c;
	i = ft_strlen(str);
	while (str[i] != character && i != 0)
		i--;
	if (s[i] == character)
		return (str + i);
	else
		return (NULL);
}
