/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hash_freetable.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sebasnadu <johnavar@student.42berlin.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 21:24:27 by sebasnadu         #+#    #+#             */
/*   Updated: 2024/02/10 21:54:30 by sebasnadu        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"

void	ft_hash_freetable(t_hashmap *table)
{
	size_t			i;
	t_hash_item		*current;
	t_hash_item		*tmp;

	if (!table)
		return ;
	i = 0;
	while (i < table->size)
	{
		current = table->items[i];
		while (current != NULL)
		{
			tmp = current->next;
			ft_hashmap_freeitem(current);
			current = tmp;
		}
		++i;
	}
	free(table->items);
	free(table);
	table = NULL;
}
