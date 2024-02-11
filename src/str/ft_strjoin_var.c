/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin_var.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sebasnadu <johnavar@student.42berlin.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 18:24:13 by sebasnadu         #+#    #+#             */
/*   Updated: 2024/02/11 18:52:20 by sebasnadu        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"

char	*ft_strjoin_var(char *first, ...)
{
	va_list			ap;
	char			*result;
	char			*current;
	char			*tmp;

	va_start(ap, first);
	result = ft_strdup(first);
	if (!result)
		return (NULL);
	current = va_arg(ap, char *);
	while (current)
	{
		tmp = ft_strjoin(result, current);
		free(result);
		if (!tmp)
			return (NULL);
		result = tmp;
		current = va_arg(ap, char *);
	}
	va_end(ap);
	return (result);
}
