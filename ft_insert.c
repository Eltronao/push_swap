/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_insert.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lagonzal <lagonzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 12:30:21 by lagonzal          #+#    #+#             */
/*   Updated: 2023/01/17 12:30:21 by lagonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include "push_swap.h"

int	ft_insert_pos(t_list **stack_a, t_list **stack_b)
{
	int		pos;
	t_list	*aux;
	t_list	*aux2;

	pos = 1;
	aux = *stack_a;
	aux2 = *stack_b;
	while (aux && aux2 && aux2->index > aux->index)
	{
		pos++;
		aux = aux->next;
	}
	return (pos);
}

void	ft_insert_top(t_list **stack_a, t_list **stack_b, int pos)
{
	int		rot;
	t_list	*aux;
	t_list	*aux2;
	int		moves;

	rot = 0;
	moves = 1;
	aux = *stack_a;
	aux2 = *stack_b;
	while (1 != pos--)
	{
		ft_rot(stack_a, 'a', 1);
		rot++;
	}
	ft_push(stack_b, stack_a, 'a');
	while (moves)
	{
		if (aux->index == aux2->next->index + 1)
			ft_swap(stack_b, 'b', 1);
		if (aux->index == aux2->index + 1)
			ft_push(stack_b, stack_a, 'a');
		else
			moves = 0;
		aux = *stack_a;
		aux2 = *stack_b;
	}
	while (rot--)
		ft_rev_rot(stack_a, 'a', 1);
}


void	ft_insert_back(t_list **stack_a, t_list **stack_b, int n)
{
	int	a_size;
	int	r;

	r = 1;
	a_size = ft_lstsize(*stack_a);
	while (a_size > n - 1)
	{
		ft_rev_rot(stack_a, 'a', 1);
		r++;
		n++;
	}
	ft_push(stack_b, stack_a, 'a');
	while (r--)
		ft_rot(stack_a, 'a', 1);
}