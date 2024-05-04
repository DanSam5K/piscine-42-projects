/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dansam <dansam@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 13:22:42 by dansam            #+#    #+#             */
/*   Updated: 2024/03/14 13:35:07 by dansam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void ft_swap(int *a, int *b)
{
  int temp;

  temp = *a;
  *a = *b;
  *b = temp;
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
//   ft_swap(ptr1, ptr2);
//   printf("%d\n", a);
//   printf("%d", b);
//   return 0;
// }