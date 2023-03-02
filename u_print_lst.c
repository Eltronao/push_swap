/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   u_print_lst.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lagonzal <larraingonzalez@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 11:55:37 by lagonzal          #+#    #+#             */
/*   Updated: 2023/03/02 18:54:26 by lagonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include "push_swap.h"
#include <stdio.h>

void    ft_print_lst(t_list **stack1)
{
    t_list *aux; 
    
    aux = *stack1;
	while (aux)
	{
	    ft_printf("index: %d, number: %d\n",aux->index, aux->content);
	    aux = aux->next;
	}
	if (ft_is_ordered(stack1, 0))
		ft_printf("Well ordered\n");
}