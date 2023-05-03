/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johnavar <johnavar@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 08:39:14 by johnavar          #+#    #+#             */
/*   Updated: 2023/05/03 08:59:49 by johnavar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.c"

void	*ft_memchr(const void *s, int c, size_t n)
{
	char	*str;
	size_t	i;

	if (s == NULL)
		return (NULL);
	i = 0;
	str = (char *)s;
	while (i < n)
	{
		if ((unsigned char)str[i] == (unsigned char)c)
			return ((void *)s + i);
		i++;
	}
	return (NULL);
}
