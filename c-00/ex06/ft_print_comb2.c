/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dansam <dansam@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 18:07:16 by dansam            #+#    #+#             */
/*   Updated: 2024/03/13 20:17:58 by dansam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
  write(1, &c, 1);
}

void ft_int_to_char(int n)
{
  ft_putchar(n / 10 + '0');
  ft_putchar(n % 10 + '0');
}

// int main(void)
// {
//   ft_print_comb2();
//   return 0;
// }
