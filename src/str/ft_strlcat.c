/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johnavar <johnavar@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 07:31:00 by johnavar          #+#    #+#             */
/*   Updated: 2024/02/05 18:07:47 by sebasnadu        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	len;
	size_t	i;
	char	*tmp;

	len = ft_strlen(dst);
	tmp = dst + len;
	i = 0;
	while (src[i] && (len + i) < size - 1)
	{
		tmp[i] = src[i];
		++i;
	}
	if (len < size)
		dst[len + i] = '\0';
	return (len + ft_strlen(src));
}
