/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_input.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lagonzal <lagonzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/22 13:19:11 by lagonzal          #+#    #+#             */
/*   Updated: 2022/12/22 17:27:44 by lagonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"

t_list  *ft_check_input(argc, argl)
{
    t_list  **stack1;

    if (argc == 1)
		ft_error(0);
	else if (argc == 2)
		*stack1 = ft_in_check_1(argl[1]);
	else
		*stack1 = ft_check_in_2(&argl[1]);
}

t_list  *ft_in_check_1(char *list)
{
    char    **splited;
    t_list  **ll;

    splited = ft_split(*list, ' ');
    if (!splited)
        return (NULL);
    return (ft_in_check_2(splited));
}

t_list  *ft_in_check_2(char **list)
{
    int     n;
    int     m;
    int     spaces;

    n = -1;
    spaces = 0;
    while (list[++n])
    {
        m = -1;
        while (list[n][++m])
        {
            if (list[n][m] == ' ')
                spaces++;
            if (!(ft_isdigit(list[n][m])) && list[n][m] != ' ' && list[n][m] != '-')
                return (NULL);
        }
    }
    if (n > 1 && spaces >= 1)
        return (ft_error(1));
    return (ft_make_list(list));
}