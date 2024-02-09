/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bubble_sort.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sebasnadu <johnavar@student.42berlin.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 20:21:11 by sebasnadu         #+#    #+#             */
/*   Updated: 2024/02/09 12:54:55 by sebasnadu        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"

void	ft_bubble_sort(int *nbrs, int len)
{
	int		i;
	int		j;
	int		swap;
	bool	is_sorted;

	if (len < 2 || !nbrs)
		return ;
	i = -1;
	is_sorted = false;
	while (++i < len - 1 && !is_sorted)
	{
		j = -1;
		is_sorted = true;
		while (++j < len - 1 - i)
		{
			if (nbrs[j] > nbrs[j + 1])
			{
				swap = nbrs[j];
				nbrs[j] = nbrs[j + 1];
				nbrs[j + 1] = swap;
				is_sorted = false;
			}
		}
	}
}
