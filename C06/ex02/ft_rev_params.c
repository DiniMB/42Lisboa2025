/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbaltaza <dbaltaza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/22 18:07:22 by dbaltaza          #+#    #+#             */
/*   Updated: 2025/09/23 09:28:35 by dbaltaza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *src)
{
	while (*src)
	{
		write(1, src, 1);
		src++;
	}
	write(1, "\n", 1);
}

int	main(int agrc, char **argv)
{
	int	i;

	i = agrc;
	while (i > 1)
	{
		ft_putstr(argv[i - 1]);
		i--;
	}
	return (0);
}
