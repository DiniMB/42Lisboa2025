/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbaltaza <dbaltaza@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/16 20:44:36 by dbaltaza          #+#    #+#             */
/*   Updated: 2025/09/18 12:59:56 by dbaltaza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char    *ft_strstr(char *str, char *to_find)
{
    int i;
    int j;

    if (!*to_find) 
        return (str);
    i = 0;
    while (str[i])
    {
        j = 0;
        while (str[i + j] == to_find[j] && to_find[j])
            j++;
        if (to_find[j] == '\0')
            return (&str[i]);
        i++;
    }
    return (0);
}

int main(void)
{
    char str[] = "Benfica";
    char to_find[] = "fica";
    char *res = ft_strstr(str, to_find);

    if (res)
        printf("Encontrei: %s\n", res);
    else
        printf("Não encontrei.\n");
    return (0);
}
