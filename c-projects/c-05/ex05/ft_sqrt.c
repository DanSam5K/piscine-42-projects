/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dansam <dansam@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/29 19:59:29 by dansam            #+#    #+#             */
/*   Updated: 2024/03/29 20:06:51 by dansam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_sqrt(int nb)
{
	int rad_exp;

	rad_exp = 1;
	if (nb > 0)
	{
		while (rad_exp * rad_exp <= nb)
		{
			if (rad_exp * rad_exp == nb)
				return (rad_exp);
			if (rad_exp > 46340)
				return (0);
			rad_exp++;
		}
	}
	return (0);
}

// int main()
// {
// 	printf("%d\n", ft_sqrt(0));
// 	printf("%d\n", ft_sqrt(1));
// }
