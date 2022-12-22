/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rotate.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lagonzal <lagonzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/22 13:19:41 by lagonzal          #+#    #+#             */
/*   Updated: 2022/12/22 13:20:51 by lagonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rot(t_list **stack, char c, int i)
{
	t_list	*first;
	t_list	*aux;

	first = *stack;
	*stack = *stack->next;
	first->next = NULL;
	ft_lstadd_back(stack, first);
	if (i != 0)
		ft_printf("p%c\n", c);
}
