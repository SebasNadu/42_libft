/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hash_createitem.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sebasnadu <johnavar@student.42berlin.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 23:15:44 by sebasnadu         #+#    #+#             */
/*   Updated: 2024/02/10 21:53:37 by sebasnadu        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"

t_hash_item	*ft_hash_createitem(char *key, char *value, int custom)
{
	t_hash_item	*new_item;

	new_item = (t_hash_item *)malloc(sizeof(t_hash_item));
	if (!new_item)
		return (NULL);
	new_item->key = ft_strdup(key);
	new_item->value = ft_strdup(value);
	if (!new_item->key || !new_item->value)
	{
		ft_memclear(&new_item->key);
		ft_memclear(&new_item->value);
		ft_memclear(&new_item);
		return (NULL);
	}
	new_item->next = NULL;
	return (new_item);
}
