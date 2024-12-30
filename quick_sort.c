/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   quick_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kokamoto <kojokamo120@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/29 10:40:30 by kokamoto          #+#    #+#             */
/*   Updated: 2024/12/30 19:52:12 by kokamoto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int    find_max_pos(t_list *b)
{
    t_list    *current;
    int        max;
    int        max_pos;
    int        pos;

    max = INT_MIN;
    max_pos = 0;
    pos = 0;
    current = b;
    while (current)
    {
        if (*(int *)current->content > max)
        {
            max = *(int *)current->content;
            max_pos = pos;
        }
        pos++;
        current = current->next;
    }
    return (max_pos);
}

// 最大値を上に持ってくる
void    move_max_to_top(t_list **b, int max_pos)
{
    int    size;

    size = ft_lstsize(*b);
    if (max_pos <= size / 2)
        while (max_pos--)
            rb(b);
    else
        while (max_pos++ < size)
            rrb(b);
}

// スタックBの要素をAに戻す
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

void    quick_sort(t_list **a, t_list **b)
{
    int        size;
    int        median;
    int        pushed;

    median = get_median(*a);
    pushed = 0;
    size = ft_lstsize(*a);
    while (size--)
    {
        if (*(int *)(*a)->content < median)
        {
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
