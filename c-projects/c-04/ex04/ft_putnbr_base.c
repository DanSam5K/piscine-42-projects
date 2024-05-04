/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dansam <dansam@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/27 15:27:29 by dansam            #+#    #+#             */
/*   Updated: 2024/03/27 15:46:07 by dansam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int ft_check_base(char *base)
{
	int i;
	int j;

	i = 0;
	if (ft_strlen(base) < 2)
		return (0);
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-' || base[i] == ' ' || (base[i] >= 9 && base[i] <= 13))
			return (0);
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void ft_putnbr_base(int nbr, char *base)
{
	long n;
	int len;

	n = nbr;
	len = ft_strlen(base);
	if (ft_check_base(base))
	{
		if (n < 0)
		{
			write(1, "-", 1);
			n = -n;
		}
		if (n >= len)
		{
			ft_putnbr_base(n / len, base);
			ft_putnbr_base(n % len, base);
		}
		else
			write(1, &base[n], 1);
	}
}

// int main()
// {
// 	ft_putnbr_base(123, "0123456789");
// 	write(1, "\n", 1);
// 	ft_putnbr_base(123, "01");
// 	write(1, "\n", 1);
// 	ft_putnbr_base(123, "0123456789ABCDEF");
// 	write(1, "\n", 1);
// 	ft_putnbr_base(123, "poneyvif");
// }