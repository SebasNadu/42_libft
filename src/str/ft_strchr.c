/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johnavar <johnavar@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 08:33:53 by johnavar          #+#    #+#             */
/*   Updated: 2024/02/06 14:39:08 by sebasnadu        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"

static inline char	*check_bytes2(char *p, const char ch)
{
	if (*++p == ch)
		return ((char *)p);
	else if (!*p)
		return (NULL);
	if (*++p == ch)
		return ((char *)p);
	else if (!*p)
		return (NULL);
	if (*++p == ch)
		return ((char *)p);
	else if (!*p)
		return (NULL);
	if (*++p == ch)
		return ((char *)p);
	else if (!*p)
		return (NULL);
	return ((char *)0x1);
}

static inline char	*check_bytes(char *p, const char ch)
{
	if (*p == ch)
		return ((char *)p);
	else if (!*p)
		return (NULL);
	if (*++p == ch)
		return ((char *)p);
	else if (!*p)
		return (NULL);
	if (*++p == ch)
		return ((char *)p);
	else if (!*p)
		return (NULL);
	if (*++p == ch)
		return ((char *)p);
	else if (!*p)
		return (NULL);
	return (check_bytes2(p, ch));
}

static inline char	*ft_strchr_64(const char *ptr, const unsigned char c)
{
	uint64_t				charmask;
	static const uint64_t	mask = 0x7efefefefefefeff;
	uint64_t				*lptr;
	char					*ret;

	lptr = (uint64_t *)ptr;
	charmask = c | (c << 8);
	charmask |= (charmask << 16);
	charmask |= (charmask << 32);
	while (42)
	{
		if ((((*lptr + mask) ^ ~*lptr) & ~mask)
			|| ((((*lptr ^ charmask) + mask) ^ ~(*lptr ^ charmask)) & ~mask))
		{
			ret = check_bytes((char *)ptr, c);
			if (ret != (char *)0x1)
				return (ret);
		}
		++lptr;
	}
	return (NULL);
}

char	*ft_strchr(const char *s, int c)
{
	char	*ptr;

	if (s == NULL)
		return (NULL);
	ptr = (char *)s;
	while (((uint64_t)ptr & sizeof(uint64_t)) - 1)
	{
		if (*ptr == (char)c)
			return (ptr);
		else if (!*ptr)
			return (NULL);
		++ptr;
	}
	return (ft_strchr_64(ptr, (unsigned char)c));
}
