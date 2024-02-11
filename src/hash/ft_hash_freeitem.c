/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hash_freeitem.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sebasnadu <johnavar@student.42berlin.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 21:18:37 by sebasnadu         #+#    #+#             */
/*   Updated: 2024/02/10 21:54:16 by sebasnadu        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"

void	ft_hash_freeitem(t_hash_item *item)
{
	if (!item)
		return ;
	free(item->key);
	free(item->value);
	free(item);
	item = NULL;
}
