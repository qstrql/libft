/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_strs.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjouot <mjouot@marvin.42.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 16:23:50 by mjouot            #+#    #+#             */
/*   Updated: 2022/10/30 16:34:05 by mjouot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../INCLUDES/ft_printf.h"
#include "../../INCLUDES/libft.h"

void	ft_printf_strs(char **strs)
{
	int	i;

	i = 0;
	while (strs[i] != NULL)
	{
		ft_printf("%s\n", strs[i]);
		i++;
	}
}
