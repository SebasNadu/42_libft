/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sebasnadu <johnavar@student.42berlin.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 20:21:17 by sebasnadu         #+#    #+#             */
/*   Updated: 2024/02/10 20:22:49 by sebasnadu        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

bool	ft_isprime(size_t n)
{
	size_t	i;

	if (n <= 1)
		return (false);
	if (n <= 3)
		return (true);
	if (n & 1 == 0 || n % 3 == 0)
		return (false);
	i = 5;
	while (i * i <= n)
	{
		if (n % i == 0 || n % (i + 2) == 0)
			return (false);
		i += 6;
	}
	return (true);
}
