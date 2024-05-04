/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dansam <dansam@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/16 07:45:36 by dansam            #+#    #+#             */
/*   Updated: 2024/03/16 07:48:00 by dansam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putstr(char *str)
{
  int i;

  i = 0;
  while (str[i] != '\0')
  {
    write(1, &str[i], 1);
    i++;
  }
}

// int main(void)
// {
//   char *str;

//   str = "Hello, World!";
//   ft_putstr(str);
//   return 0;
// }