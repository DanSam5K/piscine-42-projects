/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dansam <dansam@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 09:32:56 by dansam            #+#    #+#             */
/*   Updated: 2024/03/21 09:33:49 by dansam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_check_uppercase(char c)
{
  return (c >= 'A' && c <= 'Z');
}

int ft_str_is_uppercase(char *str)
{
  int i;

  i = 0;
  while (str[i] != '\0')
  {
    if (!ft_check_uppercase(str[i]))
      return (0);
    i++;
  }
  return (1);
}

// int main(void)
// {
//   char str[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
//   printf("%d\n", ft_str_is_uppercase(str));
//   return (0);
// }