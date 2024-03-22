/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlowcase.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dansam <dansam@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 10:31:20 by dansam            #+#    #+#             */
/*   Updated: 2024/03/22 12:17:15 by dansam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char *ft_strlowcase(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		i++;
	}
	return (str);
}

int main(void)
{
	char str[] = "Hello, World!";
	printf("%s\n", ft_strlowcase(str));
	return (0);
}
