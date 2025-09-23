/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbaltaza <dbaltaza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/22 17:30:38 by dbaltaza          #+#    #+#             */
/*   Updated: 2025/09/23 09:28:18 by dbaltaza         ###   ########.fr       */
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

	i = 1;
	while (argv[i] && agrc)
	{
		ft_putstr(argv[i]);
		i++;
	}
	return (0);
}
