/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dansam <dansam@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 20:13:51 by dansam            #+#    #+#             */
/*   Updated: 2024/03/20 20:24:35 by dansam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_check_numeric(char c)
{
  return (c >= '0' && c <= '9');
}

int ft_str_is_numeric(char *str)
{
  int i;

  i = 0;
  while (str[i] != '\0')
  {
    if (!ft_check_numeric(str[i]))
      return (0);
    i++;
  }
  return (1);
}

// int main(void)
// {
//   char str[] = "123456789";
//   printf("%d\n", ft_str_is_numeric(str));
//   return (0);
// }