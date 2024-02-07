/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johnavar <johnavar@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 13:15:24 by johnavar          #+#    #+#             */
/*   Updated: 2024/02/07 09:15:31 by sebasnadu        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"

static inline int	words_counter(const char *s, char c)
{
	int					i;
	int					counter; 

	i = 0;
	counter = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i])
			counter++;
		while ((s[i] != c) && s[i])
			i++;
	}
	return (counter);
}

static int	word_dup(const char *src, char **dst, char c)
{
	int					i;
	int					size;

	size = 0;
	while ((src[size] != c) && src[size])
		++size;
	*dst = (char *)malloc((size + 1) * sizeof(char));
	if (*dst == NULL)
		return (-1);
	(*dst)[size] = '\0';
	i = -1;
	while (++i < size)
		(*dst)[i] = src[i];
	return (i);
}

char	**ft_split(const char *s, char c)
{
	char				**strs;
	int					wcount;
	int					i;
	int					n;
	int					index;

	if (s == NULL)
		return (NULL);
	wcount = words_counter(s, c);
	strs = (char **)malloc((wcount + 1) * sizeof(*strs));
	if (strs == NULL)
		return (NULL);
	strs[wcount] = NULL;
	index = -1;
	i = 0;
	while (++index < wcount)
	{
		while (s[i] == c)
			++i;
		n = word_dup(s + i, &(strs[index]), c);
		if (n < 0)
			return (NULL);
		i += n;
	}
	return (strs);
}
