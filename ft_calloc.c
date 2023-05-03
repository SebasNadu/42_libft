/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johnavar <johnavar@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 10:04:00 by johnavar          #+#    #+#             */
/*   Updated: 2023/05/03 22:00:56 by johnavar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t	len;
	void	*ptr;

	if (count == 0 || size == 0)
	{
		count = 1;
		size = 1;
	}
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
