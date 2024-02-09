/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_selection_sort.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sebasnadu <johnavar@student.42berlin.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 20:49:36 by sebasnadu         #+#    #+#             */
/*   Updated: 2024/02/09 14:22:44 by sebasnadu        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_selection_sort(int *nbrs, int len)
{
	int	i;
	int	j;
	int	smallest;
	int	tmp;

	if (!nbrs || len < 2)
		return ;
	i = -1;
	while (++i < len)
	{
		smallest = i;
		j = i;
		while (++j < len)
			if (nbrs[j] < nbrs[smallest])
				smallest = j;
		if (smallest != i)
		{
			tmp = nbrs[i];
			nbrs[i] = nbrs[smallest];
			nbrs[smallest] = tmp;
		}
	}
}
