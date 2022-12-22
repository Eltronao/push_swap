/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lagonzal <lagonzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/22 13:19:24 by lagonzal          #+#    #+#             */
/*   Updated: 2022/12/22 13:21:07 by lagonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_push(t_list **stack1, t_list **stack2, char c)
{
	t_list	*aux;

	aux = *stack1;
	*stack1 = *stack1->next;
	aux->next = *stack2;
	*stack2 = aux;
	ft_printf("p%c\n", c);
}
