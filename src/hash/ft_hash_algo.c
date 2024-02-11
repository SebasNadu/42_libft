/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hash_algo.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sebasnadu <johnavar@student.42berlin.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 23:08:55 by sebasnadu         #+#    #+#             */
/*   Updated: 2024/02/11 14:21:38 by sebasnadu        ###   ########.fr       */
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

#define FNV_OFFSET_BASIS	0x811C9DC5ULL
#define FNV_PRIME			0x01000193ULL

// NOTE: This function is an implementation of the djb2 hashing algorithm
unsigned long	ft_hash_algo(char *key, unsigned int size)
{
	unsigned long long	hash;
	unsigned long long	c;

	hash = FNV_OFFSET_BASIS;
	while (*key)
	{
		c = *key++;
		hash ^= c;
		hash *= FNV_PRIME;
	}
	return (hash % size);
}
