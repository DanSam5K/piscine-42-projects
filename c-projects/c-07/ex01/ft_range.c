/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dansam <dansam@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/06 13:30:10 by dansam            #+#    #+#             */
/*   Updated: 2024/04/06 13:42:51 by dansam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int *ft_range(int min, int max)
{
	int *range;
	int i;

	if (min >= max)
		return (NULL);
	range = (int *)malloc(sizeof(int) * (max - min));
	if (range == NULL)
		return (NULL);
	i = 0;
	while (min < max)
	{
		range[i] = min;
		min++;
		i++;
	}
	return (range);
}

// int main()
// {
// 	int min = 5;
// 	int max = 10;
// 	int *range = ft_range(min, max);
// 	int i = 0;
// 	while (i < max - min)
// 	{
// 		printf("%d\n", range[i]);
// 		i++;
// 	}
// 	free(range);
// 	return (0);
// }
