/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbaltaza <dbaltaza@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/22 18:28:22 by dbaltaza          #+#    #+#             */
/*   Updated: 2025/09/22 19:12:46 by dbaltaza         ###   ########.fr       */
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

int main (int argc, char **argv)
{
	int i;

	i = 1;
	while (argv[i] && argc)
	{
	
	}
	return (0);
}