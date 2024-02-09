/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_quick_sort.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sebasnadu <johnavar@student.42berlin.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 17:16:59 by sebasnadu         #+#    #+#             */
/*   Updated: 2024/02/09 12:56:45 by sebasnadu        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int	median(int a, int b, int c)
{
	if (a > b)
	{
		if (b > c)
			return (b);
		else if (a > c)
			return (c);
		else
			return (a);
	}
	else
	{
		if (a > c)
			return (a);
		else if (b > c)
			return (c);
		else
			return (b);
	}
}

static void	swap(int *nbrs, int i, int j)
{
	int	tmp;

	tmp = nbrs[i];
	nbrs[i] = nbrs[j];
	nbrs[j] = tmp;
}

static int	partition(int *nbrs, int start, int end)
{
	int	pivot;
	int	i;
	int	j;
	int	tmp;

	pivot = median(nbrs[start], nbrs[(start + end) / 2], nbrs[end]);
	i = start - 1;
	j = end + 1;
	while (1)
	{
		while (nbrs[++i] < pivot)
			;
		while (nbrs[--j] > pivot)
			;
		if (i >= j)
			return (j);
		swap(nbrs, i, j);
	}
}

static void	quick_sort_recursive(int *nbrs, int start, int end)
{
	int	pivot_index;

	if (start >= end)
		return ;
	pivot_index = partition(nbrs, start, end);
	quick_sort_recursive(nbrs, start, pivot_index);
	quick_sort_recursive(nbrs, pivot_index + 1, end);
}

void	ft_quick_sort(int *nbrs, int len)
{
	if (len < 2 || !nbrs)
		return ;
	ft_quick_sort_recursive(nbrs, 0, len - 1);
}
