/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dansam <dansam@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 21:28:08 by dansam            #+#    #+#             */
/*   Updated: 2024/03/26 21:39:02 by dansam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stdio.h"

char *ft_strstr(char *str, char *to_find)
{
	int i;
	int j;

	i = 0;
	if (!to_find[0])
		return (str);
	while (str[i])
	{
		j = 0;
		while (str[i + j] == to_find[j])
		{
			if (!to_find[j + 1])
				return (&str[i]);
			j++;
		}
		i++;
	}
	return (0);
}

// int main()
// {
// 	char str[] = "Hello World!";
// 	char to_find[] = "Hello";
// 	printf("%s\n", ft_strstr(str, to_find));
// 	return (0);
// }