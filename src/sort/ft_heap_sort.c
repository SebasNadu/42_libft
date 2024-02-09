/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_heap_sort.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sebasnadu <johnavar@student.42berlin.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 19:57:39 by sebasnadu         #+#    #+#             */
/*   Updated: 2024/02/09 12:55:42 by sebasnadu        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static void	swap(int *nbrs, int i, int j)
{
	int	tmp;

	tmp = nbrs[i];
	nbrs[i] = nbrs[j];
	nbrs[j] = tmp;
}

static void	heapify(int *nbrs, int i, int len)
{
	int	left;
	int	right;
	int	max;

	left = i * 2 + 1;
	right = i * 2 + 2;
	max = i;
	if (left < len && nbrs[left] > nbrs[max])
		max = left;
	if (right < len && nbrs[right] > nbrs[max])
		max = right;
	if (max != i)
	{
		swap(nbrs, i, max);
		heapify(nbrs, max, len);
	}
}

void	ft_heap_sort(int *nbrs, int len)
{
	int	i;

	if (len < 2 || !nbrs)
		return ;
	i = len / 2;
	while (--i >= 0)
		heapify(nbrs, i, len);
	i = len;
	while (--i > 0)
	{
		swap(nbrs, 0, i);
		heapify(nbrs, 0, i);
	}
}
