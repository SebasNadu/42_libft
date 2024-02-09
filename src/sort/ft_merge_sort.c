/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_merge_sort.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sebasnadu <johnavar@student.42berlin.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 20:55:30 by sebasnadu         #+#    #+#             */
/*   Updated: 2024/02/09 12:56:28 by sebasnadu        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"

static void	merge(int *nbrs, int start, int mid, int end)
{
	int	i;
	int	left;
	int	right;
	int	*copy;

	i = 0;
	left = start;
	right = mid + 1;
	copy = ft_calloc(sizeof(int), (end - start + 1));
	while (left <= mid && right <= end)
	{
		if (nbrs[left] < nbrs[right])
			copy[i++] = nbrs[left++];
		else
			copy[i++] = nbrs[right++];
	}
	while (left <= mid)
		copy[i++] = nbrs[left++];
	while (right <= end)
		copy[i++] = nbrs[right++];
	i = -1;
	while (++i < (end - start + 1))
		nbrs[start + i] = copy[i];
	free(copy);
	copy = NULL;
}

static void	merge_sort_recursive(int *nbrs, int start, int end)
{
	int	mid;

	if (start >= end)
		return ;
	mid = (start + end) / 2;
	merge_sort_recursive(nbrs, start, mid);
	merge_sort_recursive(nbrs, mid + 1, end);
	merge(nbrs, start, mid, end);
}

void	ft_merge_sort(int *nbrs, int len)
{
	if (len < 2 || !nbrs)
		return ;
	merge_sort_recursive(nbrs, 0, len - 1);
}
