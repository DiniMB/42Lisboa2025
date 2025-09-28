/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbaltaza <dbaltaza@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/28 16:39:14 by dbaltaza          #+#    #+#             */
/*   Updated: 2025/09/28 16:39:47 by dbaltaza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int i;
	int j;
	int min_idx;
	int temp;
	
	i = 0;
	while (i < size - 1)
	{
		min_idx = i;
		j = i + 1;
		while (j < size)
		{
			if (tab[j] < tab[min_idx])
				min_idx = j;
			j++;
		}
		if (min_idx != i)
		{
			temp = tab[i];
			tab[i] = tab[min_idx];
			tab[min_idx] = temp;
		}
		i++;
	}
}
