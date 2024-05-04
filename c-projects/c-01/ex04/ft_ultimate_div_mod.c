/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dansam <dansam@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 15:15:20 by dansam            #+#    #+#             */
/*   Updated: 2024/03/15 16:27:02 by dansam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void ft_ultimate_div_mod(int *a, int *b)
{
  int temp;

  temp = *a;
  *a = *a / *b;
  *b = temp % *b;
}

// int main(void)
// {
//   int a;
//   int b;
//   int *ptr1;
//   int *ptr2;

//   a = 42;
//   b = 24;
//   ptr1 = &a;
//   ptr2 = &b;
//   ft_ultimate_div_mod(ptr1, ptr2);
//   printf("%d\n", a);
//   printf("%d", b);
//   return 0;
// }
