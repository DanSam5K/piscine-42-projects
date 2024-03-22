/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dansam <dansam@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 12:20:20 by dansam            #+#    #+#             */
/*   Updated: 2024/03/22 12:39:11 by dansam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_check_alphanumeric(char c)
{
	return ((c >= '0' && c <= '9') || (c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'));
}

int ft_check_lowercase(char c)
{
	return (c >= 'a' && c <= 'z');
}

int ft_check_uppercase(char c)
{
	return (c >= 'A' && c <= 'Z');
}

char *ft_strcapitalize(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (i == 0 || !ft_check_alphanumeric(str[i - 1]))
		{
			if (ft_check_lowercase(str[i]))
				str[i] -= 32;
		}
		else if (ft_check_uppercase(str[i]))
			str[i] += 32;
		i++;
	}
	return (str);
}

// int main(void)
// {
// 	char str[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
// 	printf("%s\n", ft_strcapitalize(str));
// 	return (0);
// }