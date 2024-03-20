/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dansam <dansam@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 19:59:50 by dansam            #+#    #+#             */
/*   Updated: 2024/03/20 20:03:57 by dansam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

ft_str_is_alpha(char *str)
{
  int i;

  i = 0;
  while (str[i] != '\0')
  {
    if (!((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')))
      return (0);
    i++;
  }
  return (1);
}

// int main(void)
// {
//   char str[] = "HelloWorld2";
//   printf("%d\n", ft_str_is_alpha(str));
//   return (0);
// }