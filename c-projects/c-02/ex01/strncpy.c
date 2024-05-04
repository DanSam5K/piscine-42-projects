/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strncpy.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dansam <dansam@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 11:35:27 by dansam            #+#    #+#             */
/*   Updated: 2024/03/19 11:47:25 by dansam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char *ft_strncpy(char *dest, char *src, unsigned int n)
{
  unsigned int i;

  i = 0;
  while (src[i] != '\0' && i < n)
  {
    dest[i] = src[i];
    i++;
  }
  while (i < n)
  {
    dest[i] = '\0';
    i++;
  }
  return (dest);
}

// int main(void)
// {
//   char src[] = "Hello, World!";
//   char dest[13];
//   printf("%s\n", ft_strncpy(dest, src, 5));
//   return (0);
// }