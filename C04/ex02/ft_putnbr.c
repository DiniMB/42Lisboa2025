/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbaltaza <dbaltaza@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/20 17:34:16 by dbaltaza          #+#    #+#             */
/*   Updated: 2025/09/20 17:41:07 by dbaltaza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	write_ch(int ch)
{
	char c;
	
	if (ch >= 10)
		write_ch(ch / 10);
	c = (ch % 10) + '0';
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	long n;

	n = nb;
	if (n < 0)
	{
		write(1, "-", 1);
		n = -n;
	}
	write_ch(n);
	write(1, "\n", 1);
}