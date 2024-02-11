/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mtx_free.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sebasnadu <johnavar@student.42berlin.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 12:25:04 by sebasnadu         #+#    #+#             */
/*   Updated: 2024/02/11 16:35:58 by sebasnadu        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"

void	ft_mtx_free(char ***mtx)
{
	int	i;

	i = 0;
	while (mtx && mtx[0] && mtx[0][i])
	{
		free(mtx[0][i]);
		i++;
	}
	if (mtx && *mtx)
	{
		free(*mtx);
		*mtx = NULL;
	}
}
