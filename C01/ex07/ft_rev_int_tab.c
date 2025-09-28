/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbaltaza <dbaltaza@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/28 16:29:30 by dbaltaza          #+#    #+#             */
/*   Updated: 2025/09/28 16:36:34 by dbaltaza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_rev_int_tab(int *tab, int size)
{
	int i;
	int j;
	int temp;
	
	i = 0;
	j = size - 1;
	
	while (i < j)  // Condição CORRETA!
	{
		// Troca COMPLETA dos elementos
		temp = tab[i];
		tab[i] = tab[j];
		tab[j] = temp;
		
		i++;
		j--;
	}
}
