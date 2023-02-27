/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_main.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lagonzal <larraingonzalez@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/22 13:30:49 by lagonzal          #+#    #+#             */
/*   Updated: 2023/02/27 22:58:49 by lagonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "push_swap.h"
#include "libft/libft.h"

int	main(int argc, char **argl)
{
	t_list	**stack;

	if (argc > 1)
	{
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
			//printf("%d\n", ft_lstsize(*stack));
			ft_top_order(stack);
			// t_list *aux = *stack;
			// while (aux)
			// {
			// printf("index: %d, number: %d\n",aux->index, aux->content);
			// aux = aux->next;
			// }
			ft_freelst(stack);
		}
		return(0);
	}
}