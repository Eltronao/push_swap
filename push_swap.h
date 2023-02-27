/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lagonzal <larraingonzalez@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/22 13:19:57 by lagonzal          #+#    #+#             */
/*   Updated: 2023/02/27 21:49:34 by lagonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft/libft.h"
#include <stdio.h>

typedef struct s_small
{
	int				big;
	int				small;

}	t_small;

// Functions for moving the elements froms one stack to another

void	ft_swap(t_list **stack, char c, int i);
void	ft_swap_both(t_list **stack1, t_list **stack2);
void	ft_push(t_list **stack1, t_list **stack2, char c);
void	ft_rot(t_list **stack, char c, int i);
void	ft_rot_both(t_list **stack1, t_list **stack2);
void	ft_rev_rot(t_list **stack, char c, int i);
void	ft_rev_rot_both(t_list **stack1, t_list **stack2);
void	ft_extract_top(t_list **stack_a,t_list ** stack_b, int pos);
void	ft_extract_bot(t_list **stack_a,t_list ** stack_b, int pos, int size);
void	ft_push_back(t_list **stack_a, t_list ** stack_b);
void	ft_lst_pos(t_list **stack_a, int pos, int size);


// Functions for checking the input

t_list	*ft_in_case_2(char **list);
t_list	*ft_in_case_1(char *list);
t_list	*ft_check_input(int argc, char **argl);
int		ft_num_limits(char	*num);
int		ft_check_nums(char **list);
int		ft_num_form(char *num);

// Functions for creating or destroying the list

t_list	*ft_makelst(char **lst);
t_list	*ft_freelst(t_list **lst);

//Order

void	ft_top_order(t_list **stack1);
int		ft_cont_in_pos(t_list **stack, int n);
void	ft_order_3(t_list **stack, int size);
int		ft_find_ins(t_list **stack_a, t_list **stack_b);
void	ft_order_5(t_list **stack_a, t_list **stack_b, int size);
void	ft_insert_back(t_list **stack_a, t_list **stack_b, int n);
void	ft_order_mid(t_list **stack_a, t_list **stack_b);
void    ft_order_big(t_list **stack_a, t_list **stack_b);
int		ft_is_ordered(t_list **stack_a, int mode);
int		ft_insert_pos(t_list **stack_a, t_list **stack_b);
void	ft_insert_top(t_list **stack_a, t_list **stack_b, int pos);
void	ft_chunks(t_list **stack_a, t_list **stack_b, int pre_chunk);

// Others

void    ft_print_lst(t_list **stack);

#endif
