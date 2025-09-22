/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbaltaza <dbaltaza@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/10 19:28:10 by dbaltaza          #+#    #+#             */
/*   Updated: 2025/09/12 13:12:26 by dbaltaza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void) 
{
	char	aplha;

	aplha = 'a';
   while (aplha <= 'z') 
   {
    	write(1, &aplha, 1); 
    	aplha++;
   } 

}

/* int	main(void)
{
    ft_print_alphabet();
    return(0);
} */
