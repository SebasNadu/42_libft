/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_radix_sort.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sebasnadu <johnavar@student.42berlin.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 23:28:52 by sebasnadu         #+#    #+#             */
/*   Updated: 2024/02/09 22:46:43 by sebasnadu        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"

inline static int	ft_abs(int nbr)
{
	if (nbr < 0)
		return (-nbr);
	return (nbr);
}

static int	get_max(int *nbrs, int len)
{
	int	i;
	int	max;

	max = ft_abs(nbrs[0]);
	i = 0;
	while (++i < len)
		if (ft_abs(nbrs[i]) > max)
			max = ft_abs(nbrs[i]);
	return (max);
}

static void	counting_sort(int *nbrs, int *output, t_radix *rdata)
{
	int	i;
	int	index;

	ft_memset(rdata->counter, 0, sizeof(int) * (rdata->base * 2 - 1));
	i = -1;
	while (++i < rdata->len)
	{
		index = ((nbrs[i] / rdata->expo) % rdata->base) + (rdata->base - 1);
		rdata->counter[index]++;
	}
	i = 0;
	while (++i < (rdata->base * 2) - 1)
		rdata->counter[i] += rdata->counter[i - 1];
	i = rdata->len;
	while (--i >= 0)
	{
		index = ((nbrs[i] / rdata->expo) % rdata->base) + (rdata->base - 1);
		output[rdata->counter[index] - 1] = nbrs[i];
		rdata->counter[index]--;
	}
}

void	ft_radix_sort(int *nbrs, int len, int base)
{
	t_radix	rdata;
	int		i;

	rdata.max = get_max(nbrs, len);
	rdata.output = (int *)malloc(sizeof(int) * len);
	rdata.counter = (int *)malloc(sizeof(int) * (base * 2 - 1));
	if (!rdata.output || !rdata.counter)
		return ;
	rdata.expo = 1;
	rdata.base = base;
	rdata.len = len;
	i = -1;
	while (rdata.max / rdata.expo >= 1)
	{
		if (++i % 2 == 0)
			counting_sort(nbrs, rdata.output, &rdata);
		else
			counting_sort(rdata.output, nbrs, &rdata);
		rdata.expo *= base;
	}
	if (i % 2 == 0)
		while (0 <= --rdata.len)
			nbrs[rdata.len] = rdata.output[rdata.len];
	free(rdata.output);
	free(rdata.counter);
}
