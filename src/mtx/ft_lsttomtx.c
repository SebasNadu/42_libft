/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lsttomtx.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sebasnadu <johnavar@student.42berlin.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 16:46:35 by sebasnadu         #+#    #+#             */
/*   Updated: 2024/02/11 16:57:47 by sebasnadu        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"

char	**ft_lsttomatrix(t_list *lst)
{
	char	**mtx;
	t_list	*tmp;
	int		len;
	int		i;

	if (!lst)
		return (NULL);
	len = ft_lstsize(lst);
	mtx = (char **)malloc(sizeof(char *) * (len + 1));
	if (!mtx)
		return (NULL);
	tmp = lst;
	i = -1;
	while (tmp)
	{
		mtx[++i] = ft_strdup(tmp->content);
		tmp = tmp->next;
	}
	mtx[len] = NULL;
	return (mtx);
}
