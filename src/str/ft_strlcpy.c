/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johnavar <johnavar@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 18:26:27 by johnavar          #+#    #+#             */
/*   Updated: 2024/02/11 18:07:53 by sebasnadu        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t dstsize)
{
	size_t	i;

	if (!src)
		return (0);
	i = 0;
	while (src[i] && i < dstsize - 1)
	{
		dest[i] = src[i];
		++i;
	}
	if (dstsize > 0)
		dest[i] = '\0';
	while (src[i])
		++i;
	return (i);
}
