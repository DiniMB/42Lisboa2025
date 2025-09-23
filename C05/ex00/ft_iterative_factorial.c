/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbaltaza <dbaltaza@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/23 09:40:36 by dbaltaza          #+#    #+#             */
/*   Updated: 2025/09/23 11:48:30 by dbaltaza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_iterative_factorial(int nb)           // Declara a função que recebe um inteiro nb.
{
    int	result;                              // Declara uma variável para armazenar o resultado.

    if (nb < 0)                              // Se nb for negativo...
        return (0);                          // ...retorna 0 (não existe fatorial de negativo).
    if (nb == 0)                             // Se nb for zero...
        return (1);                          // ...retorna 1 (por definição, 0! = 1).
    result = 1;                              // Inicializa result com 1.
    while (nb > 1)                           // Enquanto nb for maior que 1...
    {
        result *= nb;                        // ...multiplica result por nb.
        nb--;                                // ...decrementa nb.
    }
    return (result);                         // Retorna o resultado final.
}                                           // Fim da função.
