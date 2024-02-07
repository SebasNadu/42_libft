/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johnavar <johnavar@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 07:44:03 by johnavar          #+#    #+#             */
/*   Updated: 2024/02/05 21:41:30 by sebasnadu        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*tmp;

	if (s == NULL)
		return (NULL);
	tmp = (char *)s + ft_strlen(s) + 1;
	while (--tmp >= s)
	{
		if (*tmp == (char)c)
			return (tmp);
		if (tmp == s)
			break ;
	}
	return (NULL);
}
