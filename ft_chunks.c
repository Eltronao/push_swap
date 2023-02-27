/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_chunks.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lagonzal <larraingonzalez@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 16:52:26 by lagonzal          #+#    #+#             */
/*   Updated: 2023/02/27 16:52:26 by lagonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_find_small(t_list **stack_a, int limit, t_small *sm_bg);
void	ft_compare_top(t_list **stack_b);
void	ft_chunks_back(t_list **stack_a, t_list **stack_b, int pre_chunk);

void	ft_chunks(t_list **stack_a, t_list **stack_b, int pre_chunk)
{
	int				chunk_lim;
	struct s_small	sm_bg;

	chunk_lim = (ft_lstsize(*stack_a) / 2);
	while (ft_lstsize(*stack_b) < chunk_lim + pre_chunk)
	{
		ft_find_small(stack_a, chunk_lim + pre_chunk, &sm_bg);
		if (sm_bg.big != 0)
			ft_extract_bot(stack_a, stack_b, sm_bg.big, sm_bg.big);
		else
			ft_extract_top(stack_a, stack_b, sm_bg.small);
		ft_compare_top(stack_b);
	}
	if (ft_lstsize(*stack_a) > 3)
		ft_chunks(stack_a, stack_b, chunk_lim + pre_chunk);
	else
		ft_order_3(stack_a, ft_lstsize(*stack_a));
	//ft_chunks_back(stack_a, stack_b, pre_chunk);
	ft_chunks2(stack_a, stack_b, chunk_lim)
}

void	ft_chunks2(t_list **stack_b, t_list **stack_a, int pre_chunk)
{
	int				chunk_lim;
	struct s_small	sm_bg;

	chunk_lim = (ft_lstsize(*stack_a) / 2);
	while (ft_lstsize(*stack_b) < chunk_lim + pre_chunk)
	{
		ft_find_small(stack_a, chunk_lim + pre_chunk, &sm_bg);
		if (sm_bg.big != 0)
			ft_extract_bot(stack_a, stack_b, sm_bg.big, sm_bg.big);
		else
			ft_extract_top(stack_a, stack_b, sm_bg.small);
		ft_compare_top(stack_b);
	}
	if (ft_lstsize(*stack_a) > 3)
		ft_chunks(stack_a, stack_b, chunk_lim + pre_chunk);
	else
		ft_order_3(stack_a, ft_lstsize(*stack_a));
	ft_chunks_back(stack_a, stack_b, pre_chunk);
}

void	ft_chunks_back(t_list **stack_a, t_list **stack_b, int pre_chunk)
{
	int	size;
	int	pos;

	size = ft_lstsize(*stack_b);
	while (stack_b && size > pre_chunk)
	{
		/*if (ft_is_ordered(stack_b, 1))
		{	
			ft_push_back(stack_a, stack_b);
			size = 0;
		}
		else
		{*/
			pos = ft_insert_pos(stack_a, stack_b);
			ft_insert_top(stack_a, stack_b, pos);
			size = ft_lstsize(*stack_b);
		//}
	}
}

void	ft_compare_top(t_list **stack_b)
{
	t_list	*aux;

	aux = *stack_b;
	if (aux->next && aux->index < aux->next->index)
		ft_swap(stack_b, 'b', 1);
	
}

void	ft_find_small(t_list **stack_a, int limit, t_small *sm_bg)
{
	t_list *aux;
	int	pos;

	pos = 1;
	sm_bg->big = 0;
	sm_bg->small = 0;
	aux = *stack_a;
	while (aux && sm_bg->small == 0)
	{
		if (aux->index < limit)
			sm_bg->small = pos;
		pos++;
		aux = aux->next;
	}
	while (aux && aux->next)
		aux = aux->next;
	if (aux && aux->index < limit)
		sm_bg->big = ft_lstsize(*stack_a);
}