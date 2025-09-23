/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbaltaza <dbaltaza@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/23 09:40:34 by dbaltaza          #+#    #+#             */
/*   Updated: 2025/09/23 11:47:53 by dbaltaza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	int number;
	
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	number = 1;
	while (nb > 1)
	{
	//	printf("number -> %d\nnb -> %d\n", number, nb);
		number *= nb;
		nb--;
		ft_recursive_factorial(nb);
	}
	return (number); 
}
/* int	main(void)
{
	printf("%d\n", ft_recursive_factorial(6));
	return(0);
} */