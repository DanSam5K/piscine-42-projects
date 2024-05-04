/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dansam <dansam@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 09:37:36 by dansam            #+#    #+#             */
/*   Updated: 2024/03/21 09:45:06 by dansam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_check_printable(char c)
{
	return (c >= 32 && c <= 126);
}

int ft_str_is_printable(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!ft_check_printable(str[i]))
			return (0);
		i++;
	}
	return (1);
}

// int main(void)
// {
// 	char str[] = "Hello, World!";
// 	printf("%d\n", ft_str_is_printable(str));
// 	return (0);
// }