/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mtx_putfd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sebasnadu <johnavar@student.42berlin.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 16:40:12 by sebasnadu         #+#    #+#             */
/*   Updated: 2024/02/11 19:10:35 by sebasnadu        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"

void	ft_mtx_putfd(char **mtx, int fd, bool nl)
{
	size_t	i;

	if (!mtx)
		return ;
	i = 0;
	while (mtx[i])
	{
		if (nl)
			ft_putendl_fd(mtx[i], fd);
		else
			ft_putstr_fd(mtx[i], fd);
		++i;
	}
}
