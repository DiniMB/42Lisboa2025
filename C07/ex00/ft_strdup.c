/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbaltaza <dbaltaza@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/23 17:57:19 by dbaltaza          #+#    #+#             */
/*   Updated: 2025/09/23 18:12:39 by dbaltaza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char *ft_strdup(char *src)
{
	int i;
	int j;
	char *copy_string;

	i = 0;
	j = 0;
	while (src[i])
	{
		i++;
	}
	copy_string = malloc(sizeof(char) * (i + 1));
	if (copy_string == NULL)
		return (NULL);
	else
	{
		i = 0;
		while (src[i]) 
		{
			copy_string[j] = src[i];
			i++;
			j++;
		}
		copy_string[j] = '\0';
	}
	return (copy_string);
}
