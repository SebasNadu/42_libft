/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johnavar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 13:06:29 by johnavar          #+#    #+#             */
/*   Updated: 2024/02/05 00:25:11 by sebasnadu        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*d;
	unsigned char	*s;
	size_t			len;

	if (!dst && !src)
		return (NULL);
	d = (unsigned char *)dst;
	s = (unsigned char *)src;
	if (n >= 8)
	{
		len = n / 8;
		while (len--)
		{
			*(unsigned long long *)d = *(unsigned long long *)s;
			d += 8;
			s += 8;
			n -= 8;
		}
	}
	while (n--)
		*d++ = *s++;
	return (dst);
}
