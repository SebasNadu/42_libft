/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_char.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sebasnadu <johnavar@student.42berlin.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/02 11:06:33 by sebasnadu         #+#    #+#             */
/*   Updated: 2024/02/05 18:06:20 by sebasnadu        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/ft_printf.h"

int	ft_print_c(int fd, char c)
{
	if (write(fd, &c, 1) == -1)
		return (0);
	return (1);
}

int	ft_print_char(int fd, char c, t_print *flags)
{
	int	count;

	count = 0;
	if (flags->left == 1)
		count += ft_print_c(fd, c);
	if (flags->width > 1)
		count += ft_print_pad(fd, flags->width, 1, flags->zero);
	if (flags->left == 0)
		count += ft_print_c(fd, c);
	return (count);
}
