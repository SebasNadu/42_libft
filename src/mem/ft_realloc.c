/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_realloc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sebasnadu <johnavar@student.42berlin.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 20:00:23 by sebasnadu         #+#    #+#             */
/*   Updated: 2024/02/07 20:14:12 by sebasnadu        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"

void	*ft_realloc(void *ptr, size_t size)
{
	void	*new;

	if (!ptr)
		return (ft_calloc(1, size));
	if (!size && ptr)
	{
		ft_memclear(&ptr);
		return (ptr);
	}
	new = malloc(size);
	if (!new)
		return (NULL);
	ft_memcpy(new, ptr, size);
	ft_memclear(&ptr);
	ptr = new;
	return (ptr);
}
