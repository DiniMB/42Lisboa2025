/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbaltaza <dbaltaza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/20 17:47:31 by dbaltaza          #+#    #+#             */
/*   Updated: 2025/09/22 10:59:25 by dbaltaza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	short	signais;
	int		number;

	number = 0;
	signais = number;
	while ((*str >= 9 && *str <= 13) || *str == 32)
	{
		++str;
	}
	while (*str == '+' || *str == '-')
	{
		if (*str == '-')
			signais++;
		str++;
	}
	while (*str >= 48 && *str <= 57)
	{
		number *= 10;
		number += *str - 48;
		++str;
	}
	if (!(signais % 2))
		return (number);
	return (-number);
}

/* #include <stdio.h>
#include <stdlib.h> // para atoi oficial

int main(void)
{
	char *tests[] = {
		"  ---+--+1234ab567",
		NULL
	};
	for (int i = 0; tests[i] != NULL; i++)
	{
		printf("Input: \"%s\"\n", tests[i]);
		printf("ft_atoi: %d\n", ft_atoi(tests[i]));
		printf("atoi   : %d\n", atoi(tests[i]));
		printf("----------------------\n");
	}
	return (0);
} */
