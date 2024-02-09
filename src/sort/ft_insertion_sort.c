/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_insertion_sort.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sebasnadu <johnavar@student.42berlin.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 20:33:36 by sebasnadu         #+#    #+#             */
/*   Updated: 2024/02/09 12:56:01 by sebasnadu        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_insertion_sort(int *nbrs, int len)
{
	int	i;
	int	j;
	int	key;

	if (len < 2 || !nbrs)
		return ;
	i = 0;
	while (++i < len)
	{
		key = nbrs[i];
		j = i - 1;
		while (j >= 0 && nbrs[j] > key)
		{
			nbrs[j + 1] = nbrs[j];
			--j;
		}
		nbrs[j + 1] = key;
	}
}
