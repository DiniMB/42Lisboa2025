/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbaltaza <dbaltaza@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/11 13:21:00 by dbaltaza          #+#    #+#             */
/*   Updated: 2025/09/12 11:19:30 by dbaltaza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void)
{
	char	d1;
	char	d2;
	char	d3;

	d1 = '0';
	while (d1 <= '7')
	{
		d2 = d1 +1;
		while (d2 <= '8')
		{
			d3 = d2 +1;
			while (d3 <= '9')
			{
				write(1, &d1, 1);
				write(1, &d2, 1);
				write(1, &d3, 1);
				if (!(d1 == '7' && d2 == '8' && d3 == '9'))
					write(1, ", ", 2);
				d3++;
			}
			d2++;
		}
		d1++;
	}
}

/*  int	main(void)
{
	ft_print_comb();
	return (0);
} */
