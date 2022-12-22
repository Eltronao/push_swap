/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_input.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lagonzal <lagonzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/22 13:19:11 by lagonzal          #+#    #+#             */
/*   Updated: 2022/12/22 18:47:59 by lagonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"

t_list  *ft_check_input(argc, argl)
{
    t_list  **stack1;

    if (argc == 1)
		return(0);
	else if (argc == 2)
		*stack1 = ft_in_check_1(argl[1]);
	else
		*stack1 = ft_check_in_2(&argl[1]);
    return (*stack1);
}

int ft_num_limits(char *num)
{
    int len;

    len = int ft_strlen(num);
    if (num[0] == '-')
        if (len < 11)
            return (1);
        else if(len != 11)
            return(0);
        else
        {    
            if(0 < ft_strncmp(num, "-2147483648", 11));
                return(0);
        }
    else
        if (len < 10)
            return (1);
        else if(len != 10)
            return (0);
        else
        {    
            if(0 < ft_strncmp(num, "2147483647", 10));
                return(0);
        }
    return (1);
}

int ft_check_nums(char **list)
{
    int n;
    int m;

    n = -1;
    while (list[++n])
    {
        m = -1;
        if (!ft_num_limits(list[n]))
            return(0);
        while (list[++m])
        {    
            if(!ft_strncmp(list[n], list[m], 11))
                return(0);
        }
    }
}

t_list  *ft_in_check_1(char *list)
{
    char    **splited;
    t_list  **ll;

    splited = ft_split(*list, ' ');
    if (!splited)
        return (0);
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
                return (0);
        }
    }
    if (n > 1 && spaces >= 1)
        return (0);
    if (ft_check_same_num(list) != 0)
        return(0);
    return (ft_make_list(list));
}
