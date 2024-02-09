/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_matrixdup.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sebasnadu <johnavar@student.42berlin.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 12:29:28 by sebasnadu         #+#    #+#             */
/*   Updated: 2024/02/07 19:00:55 by sebasnadu        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"

char	**ft_matrixdup(char **mtx)
{
	int		i;
	int		size;
	char	**tmp;

	if (!mtx || !mtx[0])
		return (NULL);
	size = ft_matrixlen(mtx);
	tmp = malloc((size + 1) * sizeof(char *));
	if (!tmp)
		return (NULL);
	i = -1;
	while (mtx[++i])
	{
		tmp[i] = ft_strdup(mtx[i]);
		if (!tmp[i])
		{
			ft_matrixfree(&tmp);
			return (NULL);
		}
	}
	tmp[i] = NULL;
	return (tmp);
}
