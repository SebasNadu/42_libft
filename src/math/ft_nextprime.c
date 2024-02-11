/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nextprime.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sebasnadu <johnavar@student.42berlin.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 20:24:06 by sebasnadu         #+#    #+#             */
/*   Updated: 2024/02/10 21:56:55 by sebasnadu        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"

size_t	ft_nextprime(size_t n)
{
	if (n <= 1)
		return (2);
	if (n == 2)
		return (3);
	n += 2;
	while (!ft_isprime(n))
		n += 2;
	return (n);
}
