/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_extend_matrix.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sebasnadu <johnavar@student.42berlin.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 12:30:30 by sebasnadu         #+#    #+#             */
/*   Updated: 2023/12/04 11:36:00 by sebasnadu        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

static void	ft_extend_loop(char ***matrix, char ***new, int len, int *i)
{
	while (++(*i) < len)
	{
		*new[*i] = *matrix[*i];
		if (!*new[*i])
		{
			ft_matrixfree(matrix);
			ft_matrixfree(new);
			return ;
		}
	}
}

char	**ft_extend_matrix(char **matrix, char *str)
{
	char	**new;
	int		len;
	int		i;

	i = -1;
	new = NULL;
	if (!str)
		return (matrix);
	len = ft_matrixlen(matrix);
	new = (char **)malloc(sizeof(char *) * (len + 2));
	if (!new)
		return (NULL);
	new[len + 1] = NULL;
	ft_extend_loop(&matrix, &new, len, &i);
	if (!matrix)
		return (NULL);
	new[i] = ft_strdup(str);
	if (!new[i])
		ft_matrixfree(&new);
	ft_matrixfree(&matrix);
	return (new);
}
