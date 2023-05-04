/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johnavar <johnavar@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 08:33:53 by johnavar          #+#    #+#             */
/*   Updated: 2023/05/04 00:16:38 by johnavar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int i)
{
	if (!s)
		return (NULL);
	while (*s)
	{
		if (*s == (char)i)
			return ((char *)s);
		s++;
	}
	if (*s == (char)i)
		return ((char *)s);
	return (NULL);
}
