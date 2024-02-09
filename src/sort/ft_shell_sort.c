/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_shell_sort.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sebasnadu <johnavar@student.42berlin.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 10:00:31 by sebasnadu         #+#    #+#             */
/*   Updated: 2024/02/09 12:57:10 by sebasnadu        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_shell_sort(int *nbrs, int len)
{
	int	gap;
	int	tmp;
	int	i;
	int	j;

	if (len < 2 || !nbrs)
		return ;
	gap = len / 2;
	while (gap > 0)
	{
		i = gap;
		while (i < len)
		{
			tmp = nbrs[i];
			j = i;
			while (j >= gap && nbrs[j - gap] > tmp)
			{
				nbrs[j] = nbrs[j - gap];
				j -= gap;
			}
			nbrs[j] = tmp;
			++i;
		}
		gap /= 2;
	}
}
