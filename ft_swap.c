/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lagonzal <lagonzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/22 13:19:48 by lagonzal          #+#    #+#             */
/*   Updated: 2022/12/22 13:22:32 by lagonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(t_list **stack, char c, int i)
{
	t_list	*aux;

	aux = *stack->next;
	*stack->next = stack->next->next;
	aux->next = *stack;
	*stack = aux;
	if (i != 0)
		ft_printf("s%c\n");
}
