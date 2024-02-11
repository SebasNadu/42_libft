/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hash_createtable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sebasnadu <johnavar@student.42berlin.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 23:28:49 by sebasnadu         #+#    #+#             */
/*   Updated: 2024/02/11 00:12:52 by sebasnadu        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"

t_hashmap	*ft_hash_createtable(size_t size)
{
	t_hashmap	*new_table;
	size_t		i;
	size_t		safe_size;

	new_table = (t_hashmap *)malloc(sizeof(t_hashmap));
	if (!new_table)
		return (NULL);
	safe_size = ft_nextprime(size + (size / 2));
	new_table->size = size;
	new_table->count = 0;
	new_table->items = malloc(sizeof(t_hash_item *) * safe_size);
	if (!new_table->items)
		return (ft_memclear(&new_table), NULL);
	i = 0;
	while (i < safe_size)
		new_table->items[i++] = NULL;
	return (new_table);
}
