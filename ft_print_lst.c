/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_lst.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lagonzal <lagonzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 11:55:37 by lagonzal          #+#    #+#             */
/*   Updated: 2023/01/17 12:09:59 by lagonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include "push_swap.h"
#include <stdio.h>

void    ft_print_lst(t_list **stack1)
{
    t_list  *aux;

    aux = *stack1;
    while (aux)
    {
        printf("%d\n", aux->*content);
        aux = aux->next;
    }
}