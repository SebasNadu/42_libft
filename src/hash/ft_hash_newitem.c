/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hash_newitem.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sebasnadu <johnavar@student.42berlin.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 23:15:44 by sebasnadu         #+#    #+#             */
/*   Updated: 2024/02/11 13:30:32 by sebasnadu        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"

t_hash_item	*ft_hash_newitem(char *key, char *value)
{
	t_hash_item	*new_item;

	new_item = (t_hash_item *)malloc(sizeof(t_hash_item));
	if (!new_item)
		return (NULL);
	new_item->key = ft_strdup(key);
	new_item->value = ft_strdup(value);
	if (!new_item->key || !new_item->value)
	{
		ft_memclear((void **)&new_item->key);
		ft_memclear((void **)&new_item->value);
		ft_memclear((void **)&new_item);
		return (NULL);
	}
	new_item->next = NULL;
	return (new_item);
}
