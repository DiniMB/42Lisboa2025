/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbaltaza <dbaltaza@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/23 09:40:25 by dbaltaza          #+#    #+#             */
/*   Updated: 2025/09/23 16:34:13 by dbaltaza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_is_prime(int nb)
{
    int i;

    if (nb <= 1)
        return (0); // negativos, 0 e 1 não são primos
    i = 2;
    while (i * i <= nb) // só até à raiz quadrada
    {
        if (nb % i == 0)
            return (0); // achou divisor → não é primo
        i++;
    }
    return (1); // nenhum divisor → é primo
}
