/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_median.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kokamoto <kojokamo120@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/31 01:54:49 by kokamoto          #+#    #+#             */
/*   Updated: 2024/12/31 14:55:37 by kokamoto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"


int    *create_array_median(t_list *stack, int size)
{
    int    *array;
    int    i;

    if (!(array = (int *)malloc(sizeof(int) * size)))
        return (NULL);
    i = 0;
    while (stack)
    {
        array[i++] = *(int *)stack->sort_index;
        stack = stack->next;
    }
    return (array);
}

void    sort_array_median(int *array, int size)
{
    int    i;
    int    j;
    int    temp;

    i = -1;
    while (++i < size - 1)
    {
        j = -1;
        while (++j < size - 1 - i)
        {
            if (array[j] > array[j + 1])
            {
                temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
}

int    get_median(t_list *stack)
{
    int    *array;
    int    size;
    int    median;

    size = ft_lstsize(stack);
    if (!(array = create_array_median(stack, size)))
        return (0);
    sort_array_index(array, size);
    median = array[size / 2];
    free(array);
    return (median);
}
