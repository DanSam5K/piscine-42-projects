/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dansam <dansam@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 14:23:17 by dansam            #+#    #+#             */
/*   Updated: 2024/03/14 14:33:12 by dansam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void ft_div_mod(int a, int b, int *div, int *mod)
{
  *div = a / b;
  *mod = a % b;
}

// int main(void)
// {
//   int a;
//   int b;
//   int div;
//   int mod;

//   a = 42;
//   b = 24;
//   ft_div_mod(a, b, &div, &mod);
//   printf("%d\n", div);
//   printf("%d", mod);
//   return 0;
// }