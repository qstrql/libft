/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjouot <mjouot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 11:43:07 by mjouot            #+#    #+#             */
/*   Updated: 2022/09/28 15:14:27 by mjouot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*s_cpy;

	i = 0;
	s_cpy = (unsigned char *) s;
	while (i < n)
	{
		if (s_cpy[i] == (unsigned char)c)
			return (&s_cpy[i]);
		i++;
	}
	return (0);
}
