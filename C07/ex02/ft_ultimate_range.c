/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbaltaza <dbaltaza@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/24 12:50:53 by dbaltaza          #+#    #+#             */
/*   Updated: 2025/09/24 13:08:25 by dbaltaza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int ft_ultimate_range(int **range, int min, int max)
{
	int i;
	int tamanho;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	tamanho = max - min;
	*range = (int *)malloc(sizeof(int) * tamanho);
	if (*range == NULL)
		return (-1); 
	i = 0;
	while (min < max)
	{
		(*range)[i] = min;
		min++;
		i++;
	}
	return (tamanho);
}

