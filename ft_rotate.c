/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rotate.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lagonzal <lagonzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/22 13:19:41 by lagonzal          #+#    #+#             */
/*   Updated: 2023/01/17 12:50:14 by lagonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"

void	ft_rot(t_list **stack, char c, int i)
{
	t_list	*first;

	first = *stack;
	*stack = first->next;
	first->next = NULL;
	ft_lstadd_back(stack, first);
	if (i != 0)
		ft_printf("p%c\n", c);
}
