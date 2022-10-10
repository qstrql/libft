/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjouot <mjouot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 11:41:12 by mjouot            #+#    #+#             */
/*   Updated: 2022/09/30 10:41:13 by mjouot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>

void	ft_bzero(void *s, size_t n)
{
	size_t		i;
	char		*scpy;

	i = 0;
	scpy = (char *)s;
	while (i < n)
	{
		scpy[i] = '\0';
		i++;
	}
}