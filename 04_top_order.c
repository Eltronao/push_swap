/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   04_top_order.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lagonzal <larraingonzalez@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/29 12:06:16 by lagonzal          #+#    #+#             */
/*   Updated: 2023/02/28 23:12:40 by lagonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "libft/libft.h"
#include "stdio.h"

void ft_index(t_list **stack);

void ft_top_order(t_list **stack_a)
{
    int     n;
    t_list  *stack_b;

    stack_b = NULL;
	//ft_print_lst(stack);
    n = ft_lstsize(*stack_a);
    //printf("%d\n", n);
    if (n > 1)
    {
        ft_index(stack_a);
        if (n < 4)
            ft_order_3(stack_a, n);
        else if (n < 6)
            ft_order_5(stack_a, &stack_b, n);
        else if (n < 101)
            ft_order_mid(stack_a, &stack_b, n, 2);
        //else
            //ft_order_big(stack_a, &stack_b, n, 4);
    }
}


void ft_index(t_list **stack)
{
    t_list *aux1;
    t_list *aux2;

    aux1 = *stack;
    
    while (aux1)
    {
        aux2 = aux1->next;
        while (aux2)
        {
            if (aux1->content > aux2->content)
                aux1->index += 1;
            else
                aux2->index += 1;
            aux2 = aux2->next;
        }
        aux1 = aux1->next;
    }
}