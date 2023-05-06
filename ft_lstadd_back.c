/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johnavar <johnavar@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/06 12:12:23 by johnavar          #+#    #+#             */
/*   Updated: 2023/05/06 12:36:17 by johnavar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*new_lst;

	if (!new)
		return ;
	if (!*lst)
	{
		*lst = new;
		return ;
	}
	new_lst = ft_lstlast(*lst);
	new_lst->next = new;
}
