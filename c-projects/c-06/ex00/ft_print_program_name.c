/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dansam <dansam@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/30 20:50:40 by dansam            #+#    #+#             */
/*   Updated: 2024/03/30 20:54:07 by dansam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

int main(int argc, char **argv)
{
	(void)argc;
	while (*argv[0])
	{
		ft_putchar(*argv[0]);
		argv[0]++;
	}
	ft_putchar('\n');
	return (0);
}