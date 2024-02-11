/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mtx_extend.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sebasnadu <johnavar@student.42berlin.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 12:30:30 by sebasnadu         #+#    #+#             */
/*   Updated: 2024/02/11 16:35:44 by sebasnadu        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"

char	**ft_mtx_extend(char **matrix, char *str)
{
	char	**new;
	int		len;
	int		i;

	i = -1;
	new = NULL;
	if (!str)
		return (matrix);
	len = ft_mtx_len(matrix);
	new = (char **)malloc(sizeof(char *) * (len + 2));
	if (!new)
		return (NULL);
	new[len + 1] = NULL;
	while (++i < len)
	{
		new[i] = ft_strdup(matrix[i]);
		if (!new[i])
		{
			ft_mtx_free(&matrix);
			ft_mtx_free(&new);
		}
	}
	new[i] = ft_strdup(str);
	ft_mtx_free(&matrix);
	return (new);
}
