/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lagonzal <lagonzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/22 13:19:24 by lagonzal          #+#    #+#             */
/*   Updated: 2023/01/17 12:34:19 by lagonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"

void	ft_push(t_list **stack1, t_list **stack2, char c)
{
	t_list	*aux;

	aux = *stack1;
	*stack1 = aux->next;
	aux->next = *stack2;
	*stack2 = aux;
	ft_printf("p%c\n", c);
}
