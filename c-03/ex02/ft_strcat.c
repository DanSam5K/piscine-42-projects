/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dansam <dansam@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 20:10:12 by dansam            #+#    #+#             */
/*   Updated: 2024/03/25 20:23:25 by dansam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stdio.h"

char *ft_strcat(char *dest, char *src)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (dest[i])
		i++;
	while (src[j])
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

// int main()
// {
// 	char dest[50] = "Hello";
// 	char src[] = " World!";
// 	printf("%s\n", ft_strcat(dest, src));
// 	return (0);
// }