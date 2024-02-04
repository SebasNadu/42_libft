/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johnavar <johnavar@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 10:04:00 by johnavar          #+#    #+#             */
/*   Updated: 2024/02/04 22:42:15 by sebasnadu        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t	len;
	void	*ptr;

	len = count * size;
	ptr = malloc(len);
	if (ptr == NULL)
		return (NULL);
	ft_memset(ptr, 0, len);
	return (ptr);
}
