/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johnavar <johnavar@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 08:33:53 by johnavar          #+#    #+#             */
/*   Updated: 2023/05/03 08:35:59 by johnavar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int i)
{
	if (i == '\0')
		return ((char *)s);
	while (*s)
	{
		if (*s == i)
			return ((char *)s);
		s++;
	}
	return (0);
}
