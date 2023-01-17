/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_make_list.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lagonzal <lagonzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 13:23:59 by lagonzal          #+#    #+#             */
/*   Updated: 2023/01/17 13:37:39 by lagonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include "push_swap.h"

t_list  *ft_makelst(char **lst)
{
    t_list  *first;
    t_list  *aux;
    t_list  *temp;
    int     n;
    int     num;

    n = 0;
    first = ft_lstnew(ft_atoi(lst[0]));
    aux = first;
    while (lst[++n])
    {
        temp = ft_ft_lstnew(ft_atoi(lst[n]));
        aux->next = temp;
        aux = aux->next;
    }
    return(first);
}
t_list  *ft_freelst(t_list **lst)
{
    t_list  *now;
    t_list  *prev;

    prev = *lst;
    now = *lst->next;
    while (now != NULL)
    {
        free(prev);
        prev = now;
        now = now->next;
    }
    return (free(prev), NULL);
}


