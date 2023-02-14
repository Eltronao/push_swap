/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_swap.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lagonzal <larraingonzalez@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/22 13:30:49 by lagonzal          #+#    #+#             */
/*   Updated: 2023/02/14 20:04:58 by lagonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "push_swap.h"
#include "libft/libft.h"

int	main(int argc, char **argl)
{
	t_list	**stack;

	stack = malloc(sizeof(t_list**));
	*stack = ft_check_input(argc, argl);
	if (!*stack)
	{
		write(0, "Error\n", 6);
		free(stack);
		return(1);
	}
	else
	{
		ft_top_order(stack);
		ft_print_lst(stack);
		ft_freelst(stack);
	}
	return(0);
}