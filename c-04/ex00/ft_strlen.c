/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dansam <dansam@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/27 13:01:50 by dansam            #+#    #+#             */
/*   Updated: 2024/03/27 13:02:43 by dansam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stdio.h"

int ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int main()
{
	char str[] = "Hello";
	printf("%d\n", ft_strlen(str));
	return (0);
}