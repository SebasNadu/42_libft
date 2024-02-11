/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hash_printtable.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sebasnadu <johnavar@student.42berlin.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 21:29:58 by sebasnadu         #+#    #+#             */
/*   Updated: 2024/02/10 21:55:54 by sebasnadu        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"

void	ft_hash_printtable(t_hashmap *table)
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
			ft_printf("Key: %s, Value: %s\n", current->key, current->value);
			tmp = current->next;
			current = tmp;
		}
		++i;
	}
}
