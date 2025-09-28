/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbaltaza <dbaltaza@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/28 14:40:34 by dbaltaza          #+#    #+#             */
/*   Updated: 2025/09/28 14:45:54 by dbaltaza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_is_negative(int n)
{
	char *letter;
	
    if (n < 0)
        letter = "N";
    else 
        letter = "P";    
	write(1, letter, 1);
}

/* int main(void)
{
	ft_is_negative(-12);
} */