/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_median.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kokamoto <kokamoto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/29 10:39:26 by kokamoto          #+#    #+#             */
/*   Updated: 2024/12/29 11:31:19 by kokamoto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int    *create_array(t_list *stack, int size)
{
    int    *array;
    int    i;

    if (!(array = (int *)malloc(sizeof(int) * size)))
        return (NULL);
    i = 0;
    while (stack)
    {
        array[i++] = *(int *)stack->content;
        stack = stack->next;
    }
    return (array);
}

// 配列をソート
void    sort_array(int *array, int size)
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
    if (!(array = create_array(stack, size)))
        return (0);
    sort_array(array, size);
    median = array[size / 2];
    free(array);
    return (median);
}