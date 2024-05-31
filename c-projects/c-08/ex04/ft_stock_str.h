/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stock_str.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dansam <dansam@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/31 20:21:08 by dansam            #+#    #+#             */
/*   Updated: 2024/05/31 20:22:17 by dansam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_STOCK_STR_H
#define FT_STOCK_STR_H

typedef struct s_stock_str
{
	int size;
	char *str;
	char *copy;
} t_stock_str;

#endif