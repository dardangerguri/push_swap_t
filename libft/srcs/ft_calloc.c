/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgerguri <dgerguri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 18:25:57 by dgerguri          #+#    #+#             */
/*   Updated: 2023/02/09 18:36:40 by dgerguri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*s;

	if (count == 0 || size == 0)
		return (ft_calloc(1, 1));
	if (count * size / size != count || count * size / count != size)
		return (NULL);
	s = malloc (size * count);
	if (s == NULL)
		return (NULL);
	ft_bzero (s, (size * count));
	return (s);
}
