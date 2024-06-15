/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_len.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybarbot <ybarbot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 08:22:34 by ybarbot            #+#    #+#             */
/*   Updated: 2023/11/15 15:41:59 by ybarbot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr_len(char *str)
{
	size_t	n;

	n = 0;
	if (str == 0)
	{
		write(1, "(null)", 6);
		n += 6;
		return (n);
	}
	while (str[n])
	{
		write(1, &str[n], 1);
		n++;
	}
	return (n);
}
