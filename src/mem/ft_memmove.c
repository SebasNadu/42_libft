/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johnavar <johnavar@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 17:14:46 by johnavar          #+#    #+#             */
/*   Updated: 2024/02/07 09:21:42 by sebasnadu        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char		*d; 
	const char	*s;

	if (dst == NULL && src == NULL)
		return (NULL);
	if ((long)dst == (long)src)
		return (dst);
	d = (char *)dst;
	s = (char *)src;
	if ((long)d < (long)s)
		while (len--)
			*d++ = *s++;
	else
	{
		d += len - 1;
		s += len - 1;
		while (len--)
			*d-- = *s--;
	}
	return (dst);
}
