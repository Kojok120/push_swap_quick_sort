/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_small.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kokamoto <kokamoto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/30 19:19:56 by kokamoto          #+#    #+#             */
/*   Updated: 2024/12/31 16:34:48 by kokamoto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	find_min_position(t_list *stack)
{
	t_list	*current;
	int		min;
	int		min_pos;
	int		pos;

	current = stack;
	min = *(int *)current->content;
	min_pos = 0;
	pos = 0;
	while (current)
	{
		if (*(int *)current->content < min)
		{
			min = *(int *)current->content;
			min_pos = pos;
		}
		pos++;
		current = current->next;
	}
	return (min_pos);
}

void	push_min_to_b(t_list **a, t_list **b)
{
	int	min_pos;
	int	size;

	size = ft_lstsize(*a);
	min_pos = find_min_position(*a);
	if (min_pos <= size / 2)
	{
		while (min_pos--)
			ra(a);
	}
	else
	{
		while (min_pos++ < size)
			rra(a);
	}
	pb(a, b);
}

void	sort_small(t_list **a, t_list **b)
{
	int	size;
	int	i;

	size = ft_lstsize(*a);
	i = 0;
	while (i < size - 3)
	{
		push_min_to_b(a, b);
		i++;
	}
	sort_three(a);
	while (*b)
		pa(a, b);
}
