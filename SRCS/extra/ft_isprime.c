/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprime.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjouot <mjouot@marvin.42.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 14:02:23 by mjouot            #+#    #+#             */
/*   Updated: 2022/10/29 14:10:45 by mjouot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isprime(int n)
{
	int	i;

	i = 5;
    if (n == 2 || n == 3)
        return (1);
    if (n <= 1 || n % 2 == 0 || n % 3 == 0)
        return (0);
    while (i * i <= n)
    {
        if (n % i == 0 || n % (i + 2) == 0)
            return (0);
    }
    return (1);
}