/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbaltaza <dbaltaza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/17 14:44:59 by dbaltaza          #+#    #+#             */
/*   Updated: 2025/09/18 12:32:43 by dbaltaza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned	int	ft_strlcat(char *dest, const char *src, unsigned int size)
{
	unsigned int	dest_len;
	unsigned int	src_len;
	unsigned int	i;

	dest_len = 0;
	src_len = 0;
	while (dest_len < size && dest[dest_len])
		dest_len++;
	while (src[src_len])
		src_len++;
	if (dest_len == size)
		return (size + src_len);
	i = 0;
	while (src[i] && (dest_len + i + 1) < size)
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	if (dest_len + i < size)
		dest[dest_len + i] = '\0';
	return (dest_len + src_len);
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
