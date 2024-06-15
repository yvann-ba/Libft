/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybarbot <ybarbot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 13:59:24 by ybarbot            #+#    #+#             */
/*   Updated: 2023/11/01 15:00:07 by ybarbot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t			cnt;
	unsigned char	*temp;
	unsigned char	c;

	temp = (unsigned char *)s;
	c = '\0';
	cnt = 0;
	while (cnt < n)
	{
		temp[cnt] = c;
		cnt++;
	}
}
