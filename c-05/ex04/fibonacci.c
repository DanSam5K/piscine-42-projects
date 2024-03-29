/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fibonacci.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dansam <dansam@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/29 19:40:41 by dansam            #+#    #+#             */
/*   Updated: 2024/03/29 19:43:31 by dansam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	if (index == 0)
		return (0);
	if (index == 1)
		return (1);
	return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}

// int main()
// {
// 	printf("%d\n", ft_fibonacci(0));
// 	printf("%d\n", ft_fibonacci(1));
// 	printf("%d\n", ft_fibonacci(2));
// 	printf("%d\n", ft_fibonacci(3));
// }