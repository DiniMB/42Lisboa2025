/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbaltaza <dbaltaza@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/10 20:01:35 by dbaltaza          #+#    #+#             */
/*   Updated: 2025/09/12 13:08:35 by dbaltaza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_is_negative(int n)
{
	char letter;
	
    if (n < 0)
        letter = "N";
    else 
        letter = "P";    
	write(1, &letter, 1);
	
}

/* int main (void) 
{
    ft_is_negative(7);
    ft_is_negative(-12);
    return(0);
} */