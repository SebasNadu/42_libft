/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hash_getvalue.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sebasnadu <johnavar@student.42berlin.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 21:40:29 by sebasnadu         #+#    #+#             */
/*   Updated: 2024/02/10 21:55:32 by sebasnadu        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"

char	*ft_hash_getvalue(t_hashmap *table, char *key)
{
	unsigned long	index;
	t_hash_item		*current;
	size_t			key_size;

	if (!table || !key)
		return (NULL);
	key_size = ft_strlen(key) + 1;
	index = ft_hash_algo(key, table->size);
	current = table->items[index];
	while (current != NULL)
	{
		if (ft_strncmp(current->key, key, key_size) == 0)
			return (current->value);
		current = current->next;
	}
	return (NULL);
}
