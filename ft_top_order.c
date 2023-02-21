/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_top_order.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lagonzal <larraingonzalez@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/29 12:06:16 by lagonzal          #+#    #+#             */
/*   Updated: 2023/02/21 19:01:51 by lagonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "libft/libft.h"

void ft_top_order(t_list **stack1)
{
    int n;

	ft_print_lst(stack1);
    n = ft_lstsize(*stack1);
    if (n == 1)
        n = 1;
    else if (n <= 3)
        ft_order_3(stack1);
    else if (n <= 5)
        ft_order_5(stack1, n);
    //else
      //  n = 3;
        //ft_order_big(stack1);
}