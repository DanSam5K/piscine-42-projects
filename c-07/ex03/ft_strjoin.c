/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dansam <dansam@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 13:00:48 by dansam            #+#    #+#             */
/*   Updated: 2024/04/08 13:11:05 by dansam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

unsigned int ft_strlen(char *str)
{
	unsigned int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char *ft_create_str(int size, char **strs, char *sep)
{
	char *str;
	int i;
	int j;
	int k;

	str = (char *)malloc(sizeof(char) * size + 1);
	if (str == NULL)
		return (NULL);
	i = 0;
	k = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j])
		{
			str[k] = strs[i][j];
			j++;
			k++;
		}
		j = 0;
		while (sep[j] && i < size - 1)
		{
			str[k] = sep[j];
			j++;
			k++;
		}
		i++;
	}
	str[k] = '\0';
	return (str);
}

char *ft_strjoin(int size, char **strs, char *sep)
{
	char *str;
	int i;
	int total_len;

	if (size == 0)
	{
		str = (char *)malloc(sizeof(char));
		if (str == NULL)
			return (NULL);
		str[0] = '\0';
		return (str);
	}
	total_len = 0;
	i = 0;
	while (i < size)
	{
		total_len += ft_strlen(strs[i]);
		i++;
	}
	total_len += ft_strlen(sep) * (size - 1);
	str = ft_create_str(size, strs, sep);
	return (str);
}

// int main()
// {
// 	char *strs[] = {"Hello", "World", "!"};
// 	char *sep = " ";
// 	char *str = ft_strjoin(3, strs, sep);
// 	printf("%s\n", str);
// 	free(str);
// 	return (0);
// }