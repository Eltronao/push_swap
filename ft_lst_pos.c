/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_pos.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lagonzal <larraingonzalez@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 22:02:27 by lagonzal          #+#    #+#             */
/*   Updated: 2023/02/26 22:02:27 by lagonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    ft_lst_pos(t_list **stack_a, int pos, int size)
{
    if (pos <= size / 2)
    {
	    while (pos != 1)
	    {
		    ft_rot(stack_a, 'a', 1);
		    pos--;
	    }
    }
    else
    {
	    while (pos <= size)
	    {
		    ft_rev_rot(stack_a, 'a', 1);
		    pos++;
	    }
    }
}