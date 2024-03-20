/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dansam <dansam@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 19:59:50 by dansam            #+#    #+#             */
/*   Updated: 2024/03/20 20:21:44 by dansam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_check_alpha(char c)
{
  return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}

ft_str_is_alpha(char *str)
{
  int i;

  i = 0;
  while (str[i] != '\0')
  {
    if (!ft_check_alpha(str[i]))
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