/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dansam <dansam@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 09:24:26 by dansam            #+#    #+#             */
/*   Updated: 2024/03/21 09:27:27 by dansam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_check_lowercase(char c)
{
  return (c >= 'a' && c <= 'z');
}

int ft_str_is_lowercase(char *str)
{
  int i;

  i = 0;
  while (str[i] != '\0')
  {
    if (!ft_check_lowercase(str[i]))
      return (0);
    i++;
  }
  return (1);
}

// int main(void)
// {
//   char str[] = "abcdefghijklmnopqrstuvwxyz";
//   printf("%d\n", ft_str_is_lowercase(str));
//   return (0);
// }
