/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hash_delete.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sebasnadu <johnavar@student.42berlin.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 02:08:11 by sebasnadu         #+#    #+#             */
/*   Updated: 2024/02/11 02:49:00 by sebasnadu        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"

static bool	ft_find_free_and_relink(t_hashmap *table, t_hash_item *current,
									char *key, size_t key_size)
{
	t_hash_item	*tmp;

	while (current->next != NULL)
	{
		if (ft_strncmp(current->next->key, key, key_size) == 0)
		{
			tmp = current->next;
			current->next = current->next->next;
			ft_hashmap_freeitem(tmp);
			table->count--;
			return (true);
		}
		current = current->next;
	}
	return (false);
}

static void	ft_free_and_relink(t_hashmap *table, t_hash_item *current,
							unsigned long int index)
{
	table->items[index] = current->next;
	ft_hash_freeitem(current);
	table->count--;
}

bool	ft_hashmap_delete(t_hashmap *table, char *key)
{
	unsigned long	index;
	t_hash_item		*current;
	size_t			key_size;

	if (!key || !table)
		return (false);
	index = ft_hash_algo(key, table->size);
	key_size = ft_strlen(key) + 1;
	current = table->items[index];
	if (!current)
		return (false);
	else if (ft_strncmp(current->key, key, key_size) == 0)
		ft_free_and_relink(table, current, index);
	else
		return (ft_find_free_and_relink(table, current, key, key_size));
	return (true);
}
