/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbaltaza <dbaltaza@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/17 18:25:54 by dbaltaza          #+#    #+#             */
/*   Updated: 2025/09/17 19:43:45 by dbaltaza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;
	
	i = 0;
	while (i < n && src[i])
	{
		dest[i] = src[i];
		i++;
	}	
	while (i < n)
    {
        dest[i] = '\0';
        i++;
    }
	return (dest);
}
