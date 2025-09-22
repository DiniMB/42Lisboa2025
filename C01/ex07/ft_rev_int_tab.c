/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbaltaza <dbaltaza@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/15 14:40:52 by dbaltaza          #+#    #+#             */
/*   Updated: 2025/09/15 16:25:01 by dbaltaza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int i;
	int j;
	int temp;

	i = 0; // pega o primeiro caractere da string
	j = size - 1; // pega o ultimo caracteere da string
	while(i < j) // enquanto o primeiro for menor que o ultimo
		{
			temp = tab[i]; // guarda o primeiro numero do caractere
			tab[i] = tab[j]; // guarda o ultimo numero no primeiro
			tab[j] = temp; // guarda o primeiro numero no ultimo
			i++; // vai aumentando ate chegar ao ultimo
			j--;
		}
}
