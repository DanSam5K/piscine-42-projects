/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dansam <dansam@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 10:33:46 by dansam            #+#    #+#             */
/*   Updated: 2024/03/18 10:40:58 by dansam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void ft_sort_int_tab(int *tab, int size)
{
  int i;
  int j;
  int temp;

  i = 0;
  while (i < size)
  {
    j = i + 1;
    while (j < size)
    {
      if (tab[i] > tab[j])
      {
        temp = tab[i];
        tab[i] = tab[j];
        tab[j] = temp;
      }
      j++;
    }
    i++;
  }
}

// int main(void)
// {
//   int tab[] = {9, 8, 7, 6, 5, 4, 3, 2, 1};
//   int size = 9;
//   int i;

//   ft_sort_int_tab(tab, size);
//   i = 0;
//   while (i < size)
//   {
//     printf("%d ", tab[i]);
//     i++;
//   }
//   printf("\n");
//   return (0);
// }