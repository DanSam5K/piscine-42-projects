/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dansam <dansam@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/29 19:24:17 by dansam            #+#    #+#             */
/*   Updated: 2024/03/29 19:28:48 by dansam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_iterative_power(int nb, int power)
{
	int result;

	result = 1;
	if (power < 0)
		return (0);
	while (power > 0)
	{
		result *= nb;
		power--;
	}
	return (result);
}

// int main()
// {
// 	printf("%d\n", ft_iterative_power(2, 3));
// 	printf("%d\n", ft_iterative_power(2, 0));
// 	printf("%d\n", ft_iterative_power(2, -3));
// 	printf("%d\n", ft_iterative_power(0, 0));
// 	printf("%d\n", ft_iterative_power(0, 3));
// 	printf("%d\n", ft_iterative_power(0, -3));
// 	printf("%d\n", ft_iterative_power(3, 3));
// 	printf("%d\n", ft_iterative_power(3, 0));
// 	printf("%d\n", ft_iterative_power(3, -3));
// 	return (0);
// }