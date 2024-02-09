/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_counting_sort.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sebasnadu <johnavar@student.42berlin.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 11:00:35 by sebasnadu         #+#    #+#             */
/*   Updated: 2024/02/09 13:07:57 by sebasnadu        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"

static void	find_min_max(int *nbrs, int len, int *min, int *max)
{
	int	i;

	*min = nbrs[i];
	*max = nbrs[i];
	i = 0;
	while (++i < len)
	{
		if (nbrs[i] < *min)
			*min = nbrs[i];
		if (nbrs[i] > *max)
			*max = nbrs[i];
	}
}

void	ft_counting_sort(int *nbrs, int len)
{
	int	min;
	int	max;
	int	*counter;
	int	i;
	int	j;

	if (len < 2 || !nbrs)
		return ;
	find_min_max(nbrs, len, &min, &max);
	counter = ft_calloc(max - min + 1, sizeof(int));
	i = -1;
	while (++i < len)
		counter[nbrs[i] - min]++;
	i = -1;
	j = 0;
	while (++i < max - min + 1)
	{
		while (counter[i]--)
			nbrs[j++] = i + min;
	}
	free(counter);
}
