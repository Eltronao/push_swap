/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lagonzal <lagonzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/22 13:19:48 by lagonzal          #+#    #+#             */
/*   Updated: 2023/01/17 12:50:38 by lagonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"

void	ft_swap(t_list **stack, char c, int i)
{
	t_list	*first;
	t_list	*second;

	first = *stack;
	second = first->next;
	first->next = second->next;
	second->next = first;
	*stack = second;
	if (i != 0)
		ft_printf("s%c\n", c);
}
