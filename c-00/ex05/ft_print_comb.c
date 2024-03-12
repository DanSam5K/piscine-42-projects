/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dansam <dansam@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 12:51:38 by dansam            #+#    #+#             */
/*   Updated: 2024/03/12 13:21:48 by dansam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
  write(1, &c, 1);
}

void ft_put_comb(char a, char b, char c)
{
  ft_putchar(a + '0');
  ft_putchar(b + '0');
  ft_putchar(c + '0');
  if (a == 7 && b == 8 && c == 9)
    return;
  ft_putchar(',');
  ft_putchar(' ');
}
