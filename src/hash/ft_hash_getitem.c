/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hash_getitem.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sebasnadu <johnavar@student.42berlin.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 21:46:57 by sebasnadu         #+#    #+#             */
/*   Updated: 2024/02/10 21:55:27 by sebasnadu        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"

t_hash_item	*ft_hash_getitem(t_hashmap *table, char *key)
{
	unsigned long int	index;
	t_hash_item			*current;
	size_t				key_size;

	if (!table || !key)
		return (NULL);
	key_size = ft_strlen(key) + 1;
	index = ft_hash_algo(key, table->size);
	current = table->items[index];
	while (current != NULL)
	{
		if (ft_strncmp(current->key, key, key_size) == 0)
			return (current);
		current = current->next;
	}
	return (NULL);
}
