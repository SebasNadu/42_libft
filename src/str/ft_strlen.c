/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johnavar <johnavar@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 11:46:33 by johnavar          #+#    #+#             */
/*   Updated: 2024/02/05 20:50:53 by sebasnadu        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"

inline static int	longchr_null(unsigned long c)
{
	return (((c - 0x0101010101010101) & 0x8080808080808080) != 0);
}

inline static size_t	ifreturn(const char *cp, const char *s)
{
	if (cp[0] == 0)
		return ((cp - s));
	if (cp[1] == 0)
		return ((cp - s) + 1);
	if (cp[2] == 0)
		return ((cp - s) + 2);
	if (cp[3] == 0)
		return ((cp - s) + 3);
	if (cp[4] == 0)
		return ((cp - s) + 4);
	if (cp[5] == 0)
		return ((cp - s) + 5);
	if (cp[6] == 0)
		return ((cp - s) + 6);
	return ((cp - s) + 7);
}

size_t	ft_strlen(const char *s)
{
	const unsigned long	*str;
	const char			*cp;

	str = (unsigned long *)s;
	while (42)
	{
		if (longchr_null(*str))
		{
			cp = (const char *)(str);
			return (ifreturn(cp, s));
		}
		++str;
	}
	return (0);
}
