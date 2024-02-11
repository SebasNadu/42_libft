/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hash_resize.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sebasnadu <johnavar@student.42berlin.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 01:58:11 by sebasnadu         #+#    #+#             */
/*   Updated: 2024/02/11 13:31:38 by sebasnadu        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"

static void	ft_hash_relink(t_hash_item **new_items, t_hash_item *current,
								size_t new_size)
{
	unsigned long	index;
	t_hash_item		*next;

	while (current != NULL)
	{
		next = current->next;
		index = ft_hash_algo(current->key, new_size);
		current->next = new_items[index];
		new_items[index] = current;
		current = next;
	}
}

void	ft_hash_resize(t_hashmap *table)
{
	t_hash_item	**new_items;
	size_t		new_size;
	size_t		i;

	new_size = ft_nextprime(table->size + (table->size / 2));
	new_items = malloc(sizeof(t_hash_item *) * new_size);
	if (!new_items)
		return ;
	i = 0;
	while (i < table->size)
	{
		ft_hash_relink(new_items, table->items[i], new_size);
		++i;
	}
	free(table->items);
	table->items = new_items;
	table->size = new_size;
}
