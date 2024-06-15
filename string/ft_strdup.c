/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybarbot <ybarbot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 10:57:17 by ybarbot            #+#    #+#             */
/*   Updated: 2024/04/12 11:15:05 by ybarbot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	char	*dest;
	int		i;

	i = 0;
	if (src == NULL)
		return (NULL);
	dest = ft_calloc(sizeof(char), (ft_strlen(src) + 1));
	if (!dest)
		return (NULL);
	if (dest == NULL)
		return (0);
	while (src[i])
	{
		dest[i] = (unsigned char)src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
