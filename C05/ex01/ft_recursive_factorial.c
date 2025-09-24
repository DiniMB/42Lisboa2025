/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbaltaza <dbaltaza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/23 09:40:34 by dbaltaza          #+#    #+#             */
/*   Updated: 2025/09/24 14:42:40 by dbaltaza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	int	number;

	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	number = 1;
	while (nb > 1)
	{
		number *= nb;
		nb--;
		ft_recursive_factorial(nb);
	}
	return (number);
}
