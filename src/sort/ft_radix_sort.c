/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_radix_sort.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sebasnadu <johnavar@student.42berlin.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 23:28:52 by sebasnadu         #+#    #+#             */
/*   Updated: 2024/02/09 17:21:28 by sebasnadu        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"

inline static long	ft_labs(long nbr)
{
	if (nbr < 0)
		return (-nbr);
	return (nbr);
}

static int	get_max(long *nbrs, int len)
{
	long	max;
	int		i;

	max = ft_labs(nbrs[0]);
	i = 1;
	while (i < len)
	{
		if (ft_labs(nbrs[i]) > max)
			max = ft_labs(nbrs[i]);
		++i;
	}
	return (max);
}

static void	counting_sort(int *nbrs, int len, int base, int exponent)
{
	long	*output;
	int		*counter;
	int		i;

	counter = ft_calloc(base, sizeof(int));
	output = ft_calloc(len, sizeof(long));
	i = -1;
	while (++i < len)
		counter[(nbrs[i] / exponent) % base]++;
	i = 0;
	while (++i < base)
		counter[i] += counter[i - 1];
	i = len;
	while (--i >= 0)
	{
		output[counter[(ft_labs(nbrs[i]) / exponent) % base] - 1] = nbrs[i];
		counter[(ft_labs(nbrs[i]) / exponent) % base]--;
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
	long	max;
	long	exponent;
	long	*lnbrs;

	if (!nbrs || len < 2)
		return ;
	if (base < 2)
		base = 10;
	lnbrs = (long *)nbrs;
	max = get_max(lnbrs, len);
	exponent = 1;
	while (max / exponent > 0)
	{
		counting_sort(nbrs, len, base, exponent);
		exponent *= base;
	}
}
