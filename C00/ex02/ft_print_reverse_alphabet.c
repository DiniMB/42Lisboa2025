/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbaltaza <dbaltaza@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/11 13:04:58 by dbaltaza          #+#    #+#             */
/*   Updated: 2025/09/11 13:12:55 by dbaltaza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	ralpha;

	ralpha = 'z';
	while (ralpha >= 'a')
	{
		write(1, &ralpha, 1);
		ralpha--;
	}
}

/*int	main(void)
{
	ft_print_reverse_alphabet();
	return (0);
}*/