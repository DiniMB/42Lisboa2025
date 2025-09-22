/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbaltaza <dbaltaza@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/11 12:50:57 by dbaaza            #+#    #+#             */
/*   Updated: 2025/09/12 23:23:24 by dbaltaza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_numbers(int character)
{
	int	a1;
	int	a2;

	a1 = (character / 10) + '0';
	a2 = (character % 10) + '0';
	write(1, &a1, 1);
	write(1, &a2, 1);
}

void	ft_print_comb2(void)
{
	int	c;
	int	d;

	c = 0;
	while (c <= 98)
	{
		d = c + 1;
		while (d <= 99)
		{
			print_numbers(c);
			write(1, " ", 1);
			print_numbers(d);
			if (!(c == 98 && d == 99))
				write (1, ", ", 2);
			d++;
		}
		c++;
	}
	write(1, "\n", 2);
}

int	main(void)
{
	ft_print_comb2();
	return (0);
}
