/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dansam <dansam@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/29 19:35:18 by dansam            #+#    #+#             */
/*   Updated: 2024/03/29 19:36:36 by dansam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	return (nb * ft_recursive_power(nb, power - 1));
}

// int main()
// {
// 	printf("%d\n", ft_recursive_power(2, 3));
// 	printf("%d\n", ft_recursive_power(2, 0));
// 	printf("%d\n", ft_recursive_power(2, -3));
// 	printf("%d\n", ft_recursive_power(0, 0));
// 	printf("%d\n", ft_recursive_power(0, 3));
// 	printf("%d\n", ft_recursive_power(0, -3));
// 	printf("%d\n", ft_recursive_power(3, 3));
// 	printf("%d\n", ft_recursive_power(3, 0));
// 	printf("%d\n", ft_recursive_power(3, -3));
// 	return (0);
// }