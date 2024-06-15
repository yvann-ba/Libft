/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybarbot <ybarbot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 14:12:20 by ybarbot            #+#    #+#             */
/*   Updated: 2023/11/02 08:31:46 by ybarbot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t			cnt;
	unsigned char	*src_cpy;
	unsigned char	*dest_cpy;

	src_cpy = (unsigned char *) src;
	dest_cpy = (unsigned char *) dest;
	cnt = 0;
	while (cnt < n)
	{
		dest_cpy[cnt] = src_cpy[cnt];
		cnt++;
	}
	return (dest_cpy);
}
