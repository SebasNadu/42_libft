/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hash_insert.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sebasnadu <johnavar@student.42berlin.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 21:58:21 by sebasnadu         #+#    #+#             */
/*   Updated: 2024/02/11 01:59:42 by sebasnadu        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"

static void	hashmap_replace_item(t_hash_item *current, char *value)
{
	free(current->value);
	current->value = ft_strdup(value);
}

static bool	ft_hash_insertitem(t_hashmap *table, t_hash_item *new_item,
						unsigned long index)
{
	if (table->count >= table->size)
	{
		ft_hash_freeitem(new_item);
		ft_printf_fd(2, "Error: Hashmap: No more space\n\bHashmap: \
Current size: %d, Number of items: %d", table->size, table->count);
		return (false);
	}
	new_item->next = table->items[index];
	table->items[index] = new_item;
	table->count++;
	return (true);
}

static t_hash_item	*ft_hash_search_and_replace(char *key, char *value,
									t_hash_item *current, t_hash_item *new_item)
{
	size_t			key_size;

	key_size = ft_strlen(key) + 1;
	while (current != NULL)
	{
		if (ft_strncmp(current->key, key, key_size) == 0)
		{
			ft_hash_replaceitem(current, value);
			ft_hash_freeitem(new_item);
			return (current);
		}
		current = current->next;
	}
	return (NULL);
}

t_hash_item	*hashmap_insert(char *key, char *value, t_hashmap *table)
{
	unsigned long	index;
	t_hash_item		*new_item;
	t_hash_item		*current;

	if (!key || !table)
		return (NULL);
	if (((double)table->count / (double)table->size) >= 0.75)
		ft_hash_resize(table);
	index = ft_hash_algo(key, table->size);
	new_item = ft_hash_createitem(key, value);
	current = table->items[index];
	if (!current)
		if (!ft_hash_insertitem(table, new_item, index))
			return (NULL);
	else
	{
		current = ft_hash_search_and_replace(key, value, current, new_item);
		if (current)
			return (current);
		ft_hash_collision(table, index, new_item);
	}
	return (new_item);
}
