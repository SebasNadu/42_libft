/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_radix_sort.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sebasnadu <johnavar@student.42berlin.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 23:28:52 by sebasnadu         #+#    #+#             */
/*   Updated: 2024/02/09 20:11:41 by sebasnadu        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"

static int	get_max(int *nbrs, int len)
{
	int	i;
	int	max;

	max = nbrs[0];
	i = 0;
	while (++i < len)
		if (nbrs[i] > max)
			max = nbrs[i];
	return (max);
}

static void	counting_sort(int nbrs[], int len, int base, int exponent)
{
	int	*output;
	int	*counter;
	int	i;

	output = ft_calloc(len, sizeof(int));
	counter = ft_calloc(base, sizeof(int));
	i = -1;
	while (++i < len)
		counter[(nbrs[i] / exponent) % base]++;
	i = 0;
	while (++i < base)
		counter[i] += counter[i - 1];
	i = len;
	while (--i >= 0)
	{
		output[counter[(nbrs[i] / exponent) % base] - 1] = nbrs[i];
		counter[(nbrs[i] / exponent) % base]--;
	}
	i = -1;
	while (++i < len)
		nbrs[i] = output[i];
	free(output);
	free(counter);
	output = NULL;
	counter = NULL;
}

void	ft_radix_sort(int *nbrs, int len, int base)
{
	int	max;
	int	exponent;

	max = get_max(nbrs, len);
	exponent = 1;
	while (max / exponent >= 1)
	{
		counting_sort(nbrs, len, base, exponent);
		exponent *= base;
	}
}
