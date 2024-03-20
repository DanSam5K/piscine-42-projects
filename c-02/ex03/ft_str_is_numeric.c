/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dansam <dansam@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 20:13:51 by dansam            #+#    #+#             */
/*   Updated: 2024/03/20 20:14:22 by dansam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_str_is_numeric(char *str)
{
  int i;

  i = 0;
  while (str[i] != '\0')
  {
    if (!(str[i] >= '0' && str[i] <= '9'))
      return (0);
    i++;
  }
  return (1);
}

// int main(void)
// {
//   char str[] = "1234567890";
//   printf("%d\n", ft_str_is_numeric(str));
//   return (0);
// }