/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybarbot <ybarbot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 14:14:21 by ybarbot            #+#    #+#             */
/*   Updated: 2023/11/01 15:11:48 by ybarbot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int searchedChar)
{
	int	cnt;

	cnt = 0;
	if (str == NULL)
		return (0);
	while (str[cnt])
	{
		if (str[cnt] == (char)searchedChar)
			return ((char *)(str + cnt));
		cnt++;
	}
	if (searchedChar == 0)
		return ((char *)(str + (cnt)));
	return (0);
}
