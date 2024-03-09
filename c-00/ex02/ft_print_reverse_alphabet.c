/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dansam <dansam@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 15:38:12 by dansam            #+#    #+#             */
/*   Updated: 2024/03/09 15:40:18 by dansam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
  write(1, &c, 1);
}

void ft_print_reverse_alphabet(void)
{
  char c;

  c = 'z';
  while (c >= 'a')
  {
    ft_putchar(c);
    c--;
  }
}

// int main(void)
// {
//   ft_print_reverse_alphabet();
//   return (0);
// }
