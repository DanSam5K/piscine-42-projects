/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dansam <dansam@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/10 23:11:01 by dansam            #+#    #+#             */
/*   Updated: 2024/03/10 23:13:32 by dansam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
  write(1, &c, 1);
}

void ft_print_numbers(void)
{
  char c;
  c = '0';
  while (c <= '9')
  {
    ft_putchar(c);
    c++;
  }
}

// int main()
// {
//   ft_print_numbers();
//   return 0;
// }