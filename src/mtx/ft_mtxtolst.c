/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mtxtolst.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sebasnadu <johnavar@student.42berlin.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 19:09:05 by sebasnadu         #+#    #+#             */
/*   Updated: 2024/02/11 19:11:54 by sebasnadu        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"

t_list	*ft_mtxtolst(char **mtx)
{
	t_list	*lst;
	t_list	*tmp;
	int		i;

	if (!mtx || !mtx[0])
		return (NULL);
	lst = ft_lstnew(mtx[0]);
	if (!lst)
		return (NULL);
	tmp = lst;
	i = 0;
	while (mtx[++i])
	{
		tmp->next = ft_lstnew(ft_strdup(mtx[i]));
		if (!tmp->next)
		{
			ft_lstclear(&lst, free);
			return (NULL);
		}
		tmp = tmp->next;
	}
	return (lst);
}
