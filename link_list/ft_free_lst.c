/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free_lst.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybarbot <ybarbot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 08:08:29 by ybarbot            #+#    #+#             */
/*   Updated: 2024/01/17 08:48:20 by ybarbot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_free_lst(t_list *head)
{
	t_list	*current;
	t_list	*next_node;

	current = head;
	while (current != NULL)
	{
		next_node = current->next;
		free(current);
		current = next_node;
	}
}
