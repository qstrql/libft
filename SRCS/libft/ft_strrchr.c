/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjouot <mjouot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 11:42:48 by mjouot            #+#    #+#             */
/*   Updated: 2022/10/03 14:01:53 by mjouot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;
	int	tmp;

	i = 0;
	tmp = -1;
	while (s[i] != '\0')
	{
		if (s[i] == (unsigned char)c)
			tmp = i;
		i++;
	}
	if ((unsigned char)c == '\0')
		return ((char *)&s[i]);
	if (tmp != -1)
		return ((char *)&s[tmp]);
	return (0);
}
