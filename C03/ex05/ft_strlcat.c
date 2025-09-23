/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbaltaza <dbaltaza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/17 14:44:59 by dbaltaza          #+#    #+#             */
/*   Updated: 2025/09/23 16:20:54 by dbaltaza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;

	i = ft_strlen(dest);
	if (size <= i)
	{
		return (size + ft_strlen(src));
	}
	j = 0;
	while (src[j] && size > i + 1)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (ft_strlen(dest) + ft_strlen(&src[j]));
}

/*int main(void)
{
    char dest[20] = "Hello";
    char src[] = " World!";
    unsigned int size = sizeof(dest);
    unsigned int ret;

    printf("Antes: dest = \"%s\"\n", dest);
    ret = ft_strlcat(dest, src, size);
    printf("Depois: dest = \"%s\"\n", dest);
    printf("Valor retornado: %u\n", ret);

    return 0;
}*/
