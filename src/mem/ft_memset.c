/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johnavar <johnavar@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 11:52:27 by johnavar          #+#    #+#             */
/*   Updated: 2024/02/09 14:52:16 by sebasnadu        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"

static inline void	memset_align64(long *dstp, size_t *len, int c)
{
	while ((*dstp) % sizeof(unsigned long long) != 0)
	{
		((unsigned char *)(*dstp))[0] = c;
		(*dstp)++;
		(*len)--;
	}
}

inline static void	mem_fill(unsigned long long *ptr, unsigned long long cccc)
{
	*ptr = cccc;
	*(ptr + 1) = cccc;
	*(ptr + 2) = cccc;
	*(ptr + 3) = cccc;
	*(ptr + 4) = cccc;
	*(ptr + 5) = cccc;
	*(ptr + 6) = cccc;
	*(ptr + 7) = cccc;
}

inline static void	memset_last_bytes(long *dstp, const unsigned long long cccc,
															size_t *len)
{
	size_t	len2;

	len2 = (*len) / sizeof(unsigned long long) + 1;
	while (--len2 > 0)
	{
		((unsigned long long *)(*dstp))[0] = cccc;
		*dstp += sizeof(unsigned long long);
	}
	*len %= sizeof(unsigned long long);
}

void	*ft_memset(void *ptr, int c, size_t len)
{
	long				dstp;
	unsigned long long	cccc;
	size_t				len2;

	dstp = (long)ptr;
	if (len >= 8)
	{
		cccc = (unsigned char)c;
		cccc |= cccc << 8;
		cccc |= cccc << 16;
		if (sizeof(unsigned long long) > 4)
			cccc |= cccc << 32;
		memset_align64(&dstp, &len, c);
		len2 = len / (8 * sizeof(unsigned long long)) + 1;
		while (--len2 > 0)
		{
			mem_fill((unsigned long long *)dstp, cccc);
			dstp += 8 * sizeof(unsigned long long);
		}
		len %= 8 * sizeof(unsigned long long);
		memset_last_bytes(&dstp, cccc, &len);
	}
	while (len-- > 0)
		((unsigned char *)dstp++)[0] = c;
	return (ptr);
}
