/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   quick_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kokamoto <kokamoto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/29 10:39:26 by kokamoto          #+#    #+#             */
/*   Updated: 2024/12/29 10:43:31 by kokamoto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int    get_median(t_list *stack)
{
    int    *array;
    int    size;
    int    median;

    size = ft_lstsize(stack);
    if (!(array = create_array(stack, size)))
        return (0);
    sort_array(array, size);
    median = array[size / 2];
    free(array);
    return (median);
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
