/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hash_algo.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sebasnadu <johnavar@student.42berlin.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 23:08:55 by sebasnadu         #+#    #+#             */
/*   Updated: 2024/02/11 12:13:10 by sebasnadu        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// NOTE: This function is an implementation of the djb2 hashing algorithm

/* unsigned long int	hash(char *key, unsigned int size)
{
	unsigned long int	hash;
	unsigned int		i;

	hash = 5381;
	i = 0;
	while (key && key[i])
	{
		hash = ((hash << 5) + hash) + key[i];
		i++;
	}
	return (hash % size);
} */

// NOTE: This function is an implementation of the djb2 hashing algorithm
unsigned long	ft_hash_algo(char *key, unsigned int size)
{
	unsigned long	hash;
	unsigned long	c;

	hash = 14695981039346656037UL;
	while (*key)
	{
		c = *key++;
		hash ^= c;
		hash *= 1099511628211UL;
	}
	return (hash % size);
}
