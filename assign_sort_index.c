/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   assign_sort_index.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kokamoto <kokamoto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/29 10:39:26 by kokamoto          #+#    #+#             */
/*   Updated: 2024/12/31 16:37:57 by kokamoto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	*create_array_index(t_list *stack, int size)
{
	int	*array;
	int	i;

	array = (int *)malloc(sizeof(int) * size);
	if (!array)
		return (NULL);
	i = 0;
	while (stack)
	{
		array[i++] = *(int *)stack->content;
		stack = stack->next;
	}
	return (array);
}

void	sort_array_index(int *array, int size)
{
	int	i;
	int	j;
	int	temp;

	i = 0;
	while (i < size - 1)
	{
		j = i + 1;
		while (j < size)
		{
			if (array[i] > array[j])
			{
				temp = array[i];
				array[i] = array[j];
				array[j] = temp;
			}
			j++;
		}
		i++;
	}
}

void	assign_sort_index(int *sorted_array, t_list *stack, int size)
{
	int	i;

	while (stack)
	{
		i = 0;
		while (i < size)
		{
			if (*(int *)stack->content == sorted_array[i])
			{
				stack->sort_index = (int *)malloc(sizeof(int));
				if (!stack->sort_index)
					error_exit(&stack, NULL);
				*stack->sort_index = i;
				break ;
			}
			i++;
		}
		stack = stack->next;
	}
}
