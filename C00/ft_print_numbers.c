/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbaltaza <dbaltaza@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/10 19:56:58 by dbaltaza          #+#    #+#             */
/*   Updated: 2025/09/12 13:22:29 by dbaltaza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_print_numbers(void)
{
    char num;

	num = '0';
    while(num <= '9'){
        write(1, &num, 1);  
        num++;
    }
}

/* int main(void) {

    ft_print_numbers();
    return (0);
} */