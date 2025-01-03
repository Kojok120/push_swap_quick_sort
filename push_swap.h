/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kokamoto <kokamoto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/26 11:26:43 by kokamoto          #+#    #+#             */
/*   Updated: 2024/12/31 16:34:04 by kokamoto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft/libft.h"

void	error_exit(t_list **a, t_list **b);
int		is_valid_number(const char *str, long long *num);
int		has_duplicate(t_list *stack, int num);
int		is_sorted(t_list *stack);
void	swap(t_list **stack);
void	sa(t_list **a);
void	sb(t_list **b);
void	ss(t_list **a, t_list **b);
void	push(t_list **dest, t_list **src);
void	pa(t_list **a, t_list **b);
void	pb(t_list **a, t_list **b);
void	rotate(t_list **stack);
void	ra(t_list **a);
void	rb(t_list **b);
void	rr(t_list **a, t_list **b);
void	reverse_rotate(t_list **stack);
void	rra(t_list **a);
void	rrb(t_list **b);
void	rrr(t_list **a, t_list **b);
void	sort_three(t_list **a);
void	sort_five(t_list **a, t_list **b);
void	sort(t_list **a, t_list **b);
void	sort_small(t_list **a, t_list **b);
void	quick_sort(t_list **a, t_list **b);
int		*create_array_index(t_list *stack, int size);
void	sort_array_index(int *array, int size);
void	assign_sort_index(int *sorted_array, t_list *stack, int size);
int		get_median(t_list *stack);

#endif
