/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hash_collision.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sebasnadu <johnavar@student.42berlin.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 01:59:52 by sebasnadu         #+#    #+#             */
/*   Updated: 2024/02/11 02:00:03 by sebasnadu        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"

void	ft_hash_collision(t_hashmap *table, unsigned long index,
									t_hash_item *new_item)
{
	t_hash_item	*current;

	if (table->count >= table->size)
	{
		ft_hash_freeitem(new_item);
		ft_printf_fd(2, "Error: Hashmap: No more space\n\bHashmap: \
Current size: %d, Number of items: %d", table->size, table->count);
		return ;
	}
	current = table->items[index];
	if (!current)
		table->items[index] = new_item;
	else
	{
		while (current->next != NULL)
			current = current->next;
		current->next = new_item;
	}
	new_item->next = NULL;
	table->count++;
}
