/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_num_format.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lagonzal <lagonzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/23 13:16:27 by lagonzal          #+#    #+#             */
/*   Updated: 2022/12/23 19:18:03 by lagonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include <stdio.h>

int ft_num_form(char *num)
{
    int n;

    n = 0;
    if (num[n] == '-' || num[n] == '+')
        n++;
    if (num[n] == '\0')
        return (0);
    printf("pasa el checkeo de signos\n");
    while (num[n])
    {
        if(!(ft_isdigit(num[n])))
            return(0);
        n++;
    }
    return (1);
}