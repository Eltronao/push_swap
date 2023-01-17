/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_top_order.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lagonzal <lagonzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/29 12:06:16 by lagonzal          #+#    #+#             */
/*   Updated: 2023/01/17 12:19:04 by lagonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "libft/libft.h"

void ft_top_order(t_list **stack1)
{
    int n;

    n = ft_lstsize(*stack1);
    if (n == 1)
        n = 1;
    else if (n <= 3)
        ft_order_3(stack1);
    else if (n <= 5)
        ft_order_5(stack1, n);
    else
        n = 3;
        //ft_order_big(stack1);
}