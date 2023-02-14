/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lagonzal <larraingonzalez@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/22 13:19:57 by lagonzal          #+#    #+#             */
/*   Updated: 2023/02/14 19:26:19 by lagonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft/libft.h"

// Functions for moving the elements froms one stack to another

void	ft_swap(t_list **stack, char c, int i);
void	ft_swap_both(t_list **stack1, t_list **stack2);
void	ft_push(t_list **stack1, t_list **stack2, char c);
void	ft_rot(t_list **stack, char c, int i);
void	ft_rot_both(t_list **stack1, t_list **stack2);
void	ft_rev_rot(t_list **stack, char c, int i);
void	ft_rev_rot_both(t_list **stack1, t_list **stack2);

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
void	ft_order_3(t_list **stack);
int		ft_find_ins(t_list **stack_a, t_list **stack_b);
void	ft_order_5(t_list **stack_a, int listsize);
void	ft_insert_back(t_list **stack_a, t_list **stack_b, int n);

// Others

void ft_print_lst(t_list **stack);

#endif
