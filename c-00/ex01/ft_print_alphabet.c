/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dansam <dansam@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 13:19:43 by dansam            #+#    #+#             */
/*   Updated: 2024/03/08 13:24:05 by dansam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
  write(1, &c, 1);
}

void ft_print_alphabet(void)
{
  char c;

  c = 'a';
  while (c <= 'z')
  {
    ft_putchar(c);
    c++;
  }
}

// int main(void)
// {
//   ft_print_alphabet();
//   return (0);
// }