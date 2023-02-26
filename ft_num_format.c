/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_num_format.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lagonzal <larraingonzalez@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/23 13:16:27 by lagonzal          #+#    #+#             */
/*   Updated: 2023/02/22 19:31:05 by lagonzal         ###   ########.fr       */
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
    while (num[n])
    {
        if(!(ft_isdigit(num[n])))
            return(0);
        n++;
    }
    return (1);
}