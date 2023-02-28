/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rotate.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lagonzal <larraingonzalez@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/22 13:19:41 by lagonzal          #+#    #+#             */
/*   Updated: 2023/02/27 23:49:16 by lagonzal         ###   ########.fr       */
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
		ft_printf("r%c\n", c);
}

void	rot_both(t_list **stack1, t_list **stack2)
{
	ft_rot(stack1, 'a', 0);
	ft_rot(stack2, 'b', 0);
	write(1, "rr\n", 3);
}

