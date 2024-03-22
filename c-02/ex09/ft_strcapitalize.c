/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dansam <dansam@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 12:20:20 by dansam            #+#    #+#             */
/*   Updated: 2024/03/22 12:36:42 by dansam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_check_alphanumeric(char c)
{
	return ((c >= '0' && c <= '9') || (c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'));
}

int ft_check_lowercase(char c)
{
	return (c >= 'a' && c <= 'z');
}

int ft_check_uppercase(char c)
{
	return (c >= 'A' && c <= 'Z');
}
