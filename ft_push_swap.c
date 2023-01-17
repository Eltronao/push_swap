/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_swap.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lagonzal <lagonzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/22 13:30:49 by lagonzal          #+#    #+#             */
/*   Updated: 2023/01/17 11:54:06 by lagonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "push_swap.h"
#include "libft/libft.h"

int	main(int argc, char **argl)
{
	t_list	**stack1;

	stack1 = NULL;
	*stack1 = ft_check_input(argc, argl);
	if (!*stack1)
		write(0, "Error\n", 6);
	ft_top_order(stack1);
	ft_print_lst(stack1);
	ft_freelst(stack1);
	return(0);
}