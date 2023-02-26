/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_order_mid.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lagonzal <larraingonzalez@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/25 12:09:55 by lagonzal          #+#    #+#             */
/*   Updated: 2023/02/25 12:09:55 by lagonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "push_swap.h"

void	ft_extract_bot(t_list **stack_a,t_list ** stack_b, int pos, int size);
void	ft_extract_top(t_list **stack_a,t_list ** stack_b, int pos);
int		ft_search_i(t_list **stack, int i);
void	ft_push_back(t_list **stack_a, t_list ** stack_b);


void	ft_order_mid(t_list **stack_a, t_list **stack_b)
{
	int		i;
	int		pos;

	i = 0;
	while (ft_lstsize(*stack_a) > 5)
	{
		pos = ft_search_i(stack_a, i++);
		if (ft_lstsize(*stack_a) / 2 >= pos)
			ft_extract_top(stack_a, stack_b, pos);
		else
			ft_extract_bot(stack_a, stack_b, pos, ft_lstsize(*stack_a));
	}
	ft_order_5(stack_a, stack_b, ft_lstsize(*stack_a));
	ft_push_back(stack_a, stack_b);
}

int	ft_search_i(t_list **stack, int i)
{
	int		pos;
	t_list *aux;

	pos = 1;
	aux = *stack;
	while (aux->index != i)
	{
		aux = aux->next;
		pos++;
	}
	return (pos);
}

void	ft_extract_top(t_list **stack_a,t_list ** stack_b, int pos)
{
	while (pos != 1)
	{
		ft_rot(stack_a, 'a', 1);
		pos--;
	}
	ft_push(stack_a, stack_b, 'b');
}

void	ft_extract_bot(t_list **stack_a,t_list ** stack_b, int pos, int size)
{
	while (pos <= size)
	{
		ft_rev_rot(stack_a, 'a', 1);
		pos++;
	}
	ft_push(stack_a, stack_b, 'b');
}

void	ft_push_back(t_list **stack_a, t_list ** stack_b)
{
	while (*stack_b)
	{	
		ft_push(stack_b, stack_a, 'a');
		ft_print_lst(stack_a);
	}
}