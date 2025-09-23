/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbaltaza <dbaltaza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/17 11:53:29 by dbaltaza          #+#    #+#             */
/*   Updated: 2025/09/23 16:29:36 by dbaltaza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char	*str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	if (to_find[0] == '\0')
		return (str);
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

/*int main(void)
{
	char str[] = "AIJDSNIHANDKUHADSJoaoNDBSUAD";
	char to_find[] = "Joao";
	ft_strstr(str, to_find);
	return (0);
}*/
