/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_reverse_rotate_both.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lagonzal <lagonzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/22 13:19:30 by lagonzal          #+#    #+#             */
/*   Updated: 2023/01/17 12:35:40 by lagonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_rev_rot_both(t_list **stack1, t_list **stack2)
{
	ft_rev_rot(stack1, 'a', 0);
	ft_rev_rot(stack2, 'b', 0);
	write(1, "rrr\n", 4);
}
