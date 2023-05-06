/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johnavar <johnavar@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 10:04:00 by johnavar          #+#    #+#             */
/*   Updated: 2023/05/06 14:02:57 by johnavar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t	len;
	void	*ptr;

	if (count == 0 && size == 0)
		return (NULL);
	len = count * size;
	ptr = malloc(len);
	if (ptr == NULL)
		return (NULL);
	else
	{
		while (len > 0)
		{
			((unsigned char *)ptr)[len - 1] = 0;
			len--;
		}
	}
	return (ptr);
}
