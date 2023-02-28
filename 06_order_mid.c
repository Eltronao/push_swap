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

void	ft_big_push(t_list **stack_a, t_list**stack_b, int min, int max);
int		ft_some_left(t_list **stack_a, int min, int max);
void	ft_push_back(t_list **stack_a, t_list **stack_b);
void	ft_rearrange(t_list **stack_a, int max, int t, int max_times);

void	ft_order_mid(t_list **stack_a, t_list **stack_b, int size, int t_max)
{
	int	median;
	int	t;
	int	min;
	int	max;

	median = size / 2;
	t = 1;
	min = 0;
	max = median;
	while (t <= t_max)
	{
		ft_big_push(stack_a, stack_b, min, max);
		ft_push_back(stack_a, stack_b);
		ft_rearrange(stack_a, max, t, t_max);
		t++;
		min += median;
		max += median;
	}
}

void	ft_big_push(t_list **stack_a, t_list**stack_b, int min, int max)
{
	t_list *aux;

	while (ft_some_left(stack_a, min, max))
	{
		aux = *stack_a;
		if (aux->index >= min && aux->index < max)
			ft_push(stack_a, stack_b, 'b');
		else if (aux->index >= max)
			ft_rot(stack_a, 'a', 1);
	}
}

int	ft_some_left(t_list **stack_a, int min, int max)
{
	t_list *aux;

	aux = *stack_a;
	while (aux)
	{
		if (aux->index >= min && aux->index < max)
			return (1);
	}
	return (0);

}

void	ft_rearrange(t_list **stack_a, int max, int t, int max_times)
{
	t_list *aux;

	aux = *stack_a;
	if (t != max_times)
	{	
		while (aux->index < max)
		{
			ft_rot(stack_a, 'a', 1);
			aux = *stack_a;
		}
	}
	else
	{
		while (aux->index != 0)
		{
			ft_rot(stack_a, 'a', 1);
			aux = *stack_a;
		}
	}
}

void	ft_push_back(t_list **stack_a, t_list **stack_b)
{
	struct s_small	sm_bg;
	int				size;

	size = ft_lstsize(*stack_b);
	while(size)
	{
		ft_find_big_small(stack_b, &sm_bg);
		if (sm_bg.big != 0)
			ft_extract_big(stack_a, stack_b, sm_bg.big, size);
		else
			ft_extract_small(stack_a, stack_b, sm_bg.small, size);
		size--;
	}
}