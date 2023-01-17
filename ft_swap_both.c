/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap_both.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lagonzal <lagonzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/22 13:19:45 by lagonzal          #+#    #+#             */
/*   Updated: 2023/01/17 12:38:30 by lagonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include "push_swap.h"

void	ft_swap_both(t_list **stack1, t_list **stack2)
{
	ft_swap(stack1, 'a', 0);
	ft_swap(stack2, 'b', 0);
	write(1, "ss\n", 3);
}
