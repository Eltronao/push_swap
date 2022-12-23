/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_input.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lagonzal <lagonzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/22 13:19:11 by lagonzal          #+#    #+#             */
/*   Updated: 2022/12/23 19:14:52 by lagonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include "push_swap.h"
#include <stdio.h>

t_list  *ft_in_case_2(char **list)
{
    int     n;
    int     m;
    int     spaces;
    t_list  *linked = NULL;

    n = -1;
    spaces = 0;
    printf("splitea y llega al segundo check\n");
    if (!(ft_check_nums(list)))
        return(linked);
    printf("pasa el check nums\n");
    while (list[++n])
    {
        m = -1;
        if (!ft_num_form(list[n]))
            return (linked);
        while (list[n][++m])
        {
            if (list[n][m] == ' ')
                spaces++;
        }
    }
    if (n > 1 && spaces >= 1)
    {
        printf("entra aqui\n");
        return (linked);
    }
    //return (ft_make_list(list));
    printf("el input esta bien\n");
    return(++linked);
}

t_list  *ft_check_input(int argc, char **argl)
{
    t_list  *stack1;

    stack1 = 0;
    if (argc == 1)
		return(stack1);
	else if (argc == 2)
		stack1 = ft_in_case_1(argl[1]);
	else
		stack1 = ft_in_case_2(&argl[1]);
    return (stack1);
}

int ft_num_limits(char *num)
{
    int len;

    if (num[0] == '+')
        num++;
    printf("%c\n", num[0]);
    len = (int) ft_strlen(num);
    if (num[0] == '-')
    {    
        if (len < 11)
            return (1);
        else if(len != 11)
            return(0);
        else if(0 < ft_strncmp(num, "-2147483648", 11))
                return(0);
    }
    else
    {    
        if (len < 10)
        {
            printf("a\n");
            return (1);
        }
        else if(len != 11)
            return (0);
        else if(0 < ft_strncmp(num, "2147483647", 11))
                return(0);
    }
    return (1);
}

int ft_check_nums(char **list)
{
    int n;
    int m;

    printf("Entrada en check nums\n");
    n = -1;
    while (list[++n])
    {
        m = -1;
        if (!ft_num_form(list[n]))
            return (0);
        printf("formato de numero correcto\n");
        if (!ft_num_limits(list[n]))
            return(0);
        while (list[++m])
        {    
            if(m != n && !ft_strncmp(list[n], list[m], 11))
            {
                printf("%d\n", m);
                printf("1: %s\n 2: %s\n", list[n], list[m]);
                return(0);
            }
        }
    }
    printf("devuelve un 1\n");
    return (1);
}

t_list  *ft_in_case_1(char *list)
{
    char    **splited;

    splited = ft_split((const char *) list, ' ');
    if (!splited)
        return (0);
    return (ft_in_case_2(splited));
}


