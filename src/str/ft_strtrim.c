/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johnavar <johnavar@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 09:08:06 by johnavar          #+#    #+#             */
/*   Updated: 2024/02/07 18:33:01 by sebasnadu        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"

char	*ft_strtrim(char const *s, char const *set)
{
	size_t		len;
	char		*new_str;
	char		*new_str_start;
	const char	*s_end;

	if (!s || !set)
		return (NULL);
	while (*s && ft_strchr(set, *s))
		s++;
	s_end = s + ft_strlen(s) - 1;
	while (s_end > s && ft_strchr(set, *s_end))
		s_end--;
	len = s_end - s;
	new_str = (char *)malloc((len + 2) * sizeof(char));
	if (!new_str)
		return (NULL);
	new_str_start = new_str;
	while (s <= s_end)
		*new_str++ = *s++;
	*new_str = '\0';
	return (new_str_start);
}
