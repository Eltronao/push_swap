/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lagonzal <lagonzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/22 13:19:57 by lagonzal          #+#    #+#             */
/*   Updated: 2022/12/22 13:28:15 by lagonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

typedef struct s_list
{
	int				*number;
	unsigned		*order;
	struct s_list	*next;
}	t_list;

void	ft_swap(t_list **stack, char c, int i);
void	ft_swap_both(t_list **stack1, t_list **stack2);
void	ft_push(t_list **stack1, t_list **stack2, char c);
void	ft_rot(t_list **stack, char c, int i);
void	ft_rot_both(t_list **stack1, t_list **stack2);
void	ft_rev_rot(t_list **stack, char c, int i);
void	ft_rev_rot_both(t_list **stack1, t_list **stack2);

#endif
