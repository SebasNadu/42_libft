/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sebasnadu <johnavar@student.42berlin.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 14:26:06 by sebasnadu         #+#    #+#             */
/*   Updated: 2024/02/11 16:00:33 by sebasnadu        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	root;
	int	bit;
	int	trial;

	if (nb < 0)
		return (-1);
	bit = 1 << 30;
	root = 0;
	while (bit > nb)
		bit >>= 2;
	while (bit != 0)
	{
		trial = root + bit;
		if (nb >= trial)
		{
			nb -= trial;
			root = (root >> 1) + bit;
		}
		else
			root >>= 1;
		bit >>= 2;
	}
	return (root); 
}
