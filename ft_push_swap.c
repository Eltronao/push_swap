/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_swap.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lagonzal <lagonzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/22 13:30:49 by lagonzal          #+#    #+#             */
/*   Updated: 2022/12/22 18:48:02 by lagonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "push_swap.h"

int	main(int argc, char **argl)
{
	t_list	**stack1;

	//printf("1: %s, 2:%s", argl[1], argl[2]);
	*stack1 = ft_check_input(argc, argl);
	if (!*stack)
	{	
		write(0, "Error\n", 6);
		return(1);
	}
	return(0);
}