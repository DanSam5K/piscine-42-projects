/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dansam <dansam@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 23:15:41 by dansam            #+#    #+#             */
/*   Updated: 2024/03/11 23:18:54 by dansam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
  write(1, &c, 1);
}

void ft_is_negative(int n)
{
  if (n < 0)
  {
    ft_putchar('N');
  }
  else
  {
    ft_putchar('P');
  }
}

// int main()
// {
//   ft_is_negative(5);
//   return 0;
// }
