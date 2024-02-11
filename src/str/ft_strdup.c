/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johnavar <johnavar@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 10:29:52 by johnavar          #+#    #+#             */
/*   Updated: 2024/02/11 11:53:03 by sebasnadu        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"

char	*ft_strdup(const char *s)
{
	size_t	size;
	char	*str;

	if (!s)
		return (NULL);
	size = ft_strlen(s) + 1;
	str = (char *)malloc(sizeof(char) * size);
	if (!str)
		return (NULL);
	ft_memcpy(str, s, size);
	return (str);
}
