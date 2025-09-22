/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbaltaza <dbaltaza@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/10 19:43:01 by dbaltaza          #+#    #+#             */
/*   Updated: 2025/09/12 19:22:40 by dbaltaza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void) 
{
   char aplha;

   aplha = 'z';
   while (aplha >= 'a') 
   {
       write(1, &aplha, 1); 
       aplha--;
   } 

}

/* int main(void)
{
    ft_print_alphabet();
    return(0);
}
 */