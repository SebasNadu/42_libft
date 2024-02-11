/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_subsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sebasnadu <johnavar@student.42berlin.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 17:42:08 by sebasnadu         #+#    #+#             */
/*   Updated: 2024/02/11 19:06:45 by sebasnadu        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"

static int	ft_wordcount(char *s, char *set)
{
	size_t	count;

	count = 0;
	while (*s)
	{
		if (*s && !ft_strchr(set, *s))
		{
			count++;
			while (*s && !ft_strchr(set, *s))
				s++;
		}
		else
			s++;
	}
	return (count);
}

static char	**ft_fillarray(char **aux, char *s, char *set)
{
	size_t	i;
	size_t	j;

	i = 0;
	while (*s)
	{
		if (*s && !ft_strchr(set, *s))
		{
			j = 0;
			while (*(s + j) && !ft_strchr(set, *(s + j)))
				++j;
			aux[i] = malloc((j + 1) * sizeof(char));
			if (!aux[i])
				return (NULL);
			ft_strlcpy(aux[i], s, j + 1);
			i++;
			s += j;
		}
		else
			s++;
	}
	aux[i] = NULL;
	return (aux);
}

char	**ft_subsplit(char const *s, char *set)
{
	char	**aux;
	int		words_count;

	if (!s)
		return (NULL);
	words_count = ft_wordcount((char *)s, set);
	aux = (char **)malloc(sizeof(char *) * (words_count + 1));
	if (!aux)
		return (NULL);
	aux = ft_fillarray(aux, (char *)s, set);
	return (aux);
}
