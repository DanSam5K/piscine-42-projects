/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dansam <dansam@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 09:53:50 by dansam            #+#    #+#             */
/*   Updated: 2024/03/18 10:29:29 by dansam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void ft_rev_int_tab(int *tab, int size)
{
  int i;
  int temp;

  i = 0;
  while (i < size / 2)
  {
    temp = tab[i];
    tab[i] = tab[size - i - 1];
    tab[size - i - 1] = temp;
    i++;
  }
}

// int main(void)
// {
//   int tab[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
//   int size = 9;
//   int i;

//   ft_rev_int_tab(tab, size);
//   i = 0;
//   while (i < size)
//   {
//     printf("%d ", tab[i]);
//     i++;
//   }
//   printf("\n");
//   return (0);
// }