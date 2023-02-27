/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_order_big.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lagonzal <larraingonzalez@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/25 14:18:57 by lagonzal          #+#    #+#             */
/*   Updated: 2023/02/25 14:18:57 by lagonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_rearrange(t_list **stack_a, int min);
void	ft_radix_sort1(t_list **stack_a, t_list **stack_b, int min, int max);
void	ft_find_small(t_list **stack_a, int i, int min, int max,t_small *sm_bg);
void	ft_radix_sort2(t_list **stack_a, t_list **stack_b, int min, int max);

void    ft_order_big(t_list **stack_a, t_list **stack_b)
{
	int	min;
	int	max;
	int	d = 0;
	//t_list *aux;

	min = 1;
	max = 10;
	ft_radix_sort1(stack_a, stack_b, min, max);
	while (!(ft_is_ordered(stack_a)))
 	{
		min *= 10;
		max *= 10;
		ft_radix_sort2(stack_a, stack_b, min, max);
		//aux = *stack_a;
		// printf("===============================\n");
		// while (aux)
		// {
		// 	printf("index: %d, number: %d\n",aux->index, aux->content);
		// 	aux = aux->next;
		// }
		// printf("===============================\n");
		d++;
	}
}

void	ft_radix_sort1(t_list **stack_a, t_list **stack_b, int min, int max)
{
	int 			i;
	struct s_small	sm_bg;

	i = 0;
	while (i < 9)
	{
		ft_find_small(stack_a, i, min, max, &sm_bg);
		while (sm_bg.small != 0 || sm_bg.big != 0)
		{
			if (sm_bg.big != 0 &&
				ft_lstsize(*stack_a) - sm_bg.big < sm_bg.small)
				ft_extract_bot(stack_a, stack_b, 
					sm_bg.big, ft_lstsize(*stack_a));
			else if (sm_bg.small != 0)
				ft_extract_top(stack_a, stack_b, sm_bg.small);
			ft_find_small(stack_a, i, min, max, &sm_bg);
		}
		i++;
	}
	ft_push_back(stack_a, stack_b);
}

void	ft_find_small(t_list **stack_a, int i, int min, int max,t_small *sm_bg)
{
	t_list *aux;
	int	pos;

	pos = 1;
	sm_bg->big = 0;
	sm_bg->small = 0;
	aux = *stack_a;
	while (aux && sm_bg->small == 0)
	{
		if ((aux->index % max) / min == i)
			sm_bg->small =	pos;
		pos++;
		aux = aux->next;
	}
	while (aux)
	{
		if ((aux->index % max) / min == i)
			sm_bg->big =	pos;
		pos++;
		aux = aux->next;
	}
}

void	ft_radix_sort2(t_list **stack_a, t_list **stack_b, int min, int max)
{
	int 			i;
	struct s_small	sm_bg;

	i = 0;
	while (i <= 9)
	{
		ft_find_small(stack_a, i, min, max, &sm_bg);
		while (sm_bg.small != 0 && ft_lstsize(*stack_a) > 1)
		{
			ft_extract_top(stack_a, stack_b, sm_bg.small);
			ft_find_small(stack_a, i, min, max, &sm_bg);
		}
		// t_list *aux = *stack_a;
		// while (aux)
		// {
		// 	printf("index: %d, number: %d\n",aux->index, aux->content);
		//  	aux = aux->next;
		// }
		if (ft_lstsize(*stack_a) > 1)
			ft_rearrange(stack_a, min);
		i++;
	}
	ft_push_back(stack_a, stack_b);
}

void	ft_rearrange(t_list **stack_a, int min)
{
	t_list *aux;
	int		pos;
	int		ind;
	int		n_pos;

	ind = 10;
	aux = *stack_a;
	n_pos = 1;
	pos = 1;
	while (aux)
	{
		if ((aux->index % min) / (min / 10) < ind)
		{
			ind = (aux->index % min) / (min / 10);
			pos = n_pos;
		}
		aux = aux->next;
		n_pos++;
	}
	ft_lst_pos(stack_a, pos, ft_lstsize(*stack_a));
}