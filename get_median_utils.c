/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_median_utils.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kokamoto <kokamoto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/29 10:41:50 by kokamoto          #+#    #+#             */
/*   Updated: 2024/12/29 10:42:08 by kokamoto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// 配列を作成してリストの値をコピー
static int    *create_array(t_list *stack, int size)
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
static void    sort_array(int *array, int size)
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
