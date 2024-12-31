/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   quick_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kokamoto <kojokamo120@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/29 10:40:30 by kokamoto          #+#    #+#             */
/*   Updated: 2024/12/31 15:10:53 by kokamoto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int    find_max_pos(t_list *b)
{
    t_list    *current;
    int        max_index;
    int        max_pos;
    int        pos;

    max_index = -1;
    max_pos = 0;
    pos = 0;
    current = b;
    while (current)
    {
        if (*current->sort_index > max_index)
        {
            max_index = *current->sort_index;
            max_pos = pos;
        }
        pos++;
        current = current->next;
    }
    return (max_pos);
}

void    move_max_to_top(t_list **b, int max_pos)
{
    int    size;

    size = ft_lstsize(*b);
    if (max_pos <= size / 2)
    {
        while (max_pos--)
            rb(b);
    }
    else
    {
        while (max_pos++ < size)
            rrb(b);
    }
}

void    push_back_to_a(t_list **a, t_list **b, int pushed)
{
    int    max_pos;

    while (pushed--)
    {
        max_pos = find_max_pos(*b);
        move_max_to_top(b, max_pos);
        pa(a, b);
    }
}

void    push_and_rotate (t_list **a, t_list **b)
{
    pb(a, b);
    rb(b);
}

void	quick_sort(t_list **a, t_list **b)
{
	int	size;
	int	median;
	int	pushed;

	median = get_median(*a);
	pushed = 0;
	size = ft_lstsize(*a);
	while (size--)
	{
		if (*(*a)->sort_index < median)
		{
			if (*(*a)->sort_index < median / 2)
                push_and_rotate(a, b);
			else
				pb(a, b);
			pushed++;
		}
		else
			ra(a);
	}
	if (!is_sorted(*a))
		quick_sort(a, b);
	push_back_to_a(a, b, pushed);
}
