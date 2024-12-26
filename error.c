/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kokamoto <kokamoto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/26 11:51:15 by kokamoto          #+#    #+#             */
/*   Updated: 2024/12/26 11:52:03 by kokamoto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    error_exit(t_list **a, t_list **b)
{
    if (a)
        ft_lstclear(a, free);
    if (b)
        ft_lstclear(b, free);
    printf("Error\n");
    exit(1);
}

int is_valid_number(const char *str, long *num)
{
    char *endptr;
    *num = strtol(str, &endptr, 10);
    
    if (*endptr != '\0')
        return (0);
    if (*num > INT_MAX || *num < INT_MIN)
        return (0);
    return (1);
}

int has_duplicate(t_list *stack, int num)
{
    while (stack)
    {
        if (*(int *)stack->content == num)
            return (1);
        stack = stack->next;
    }
    return (0);
}

int is_sorted(t_list *stack)
{
    while (stack && stack->next)
    {
        if (*(int *)stack->content > *(int *)stack->next->content)
            return (0);
        stack = stack->next;
    }
    return (1);
}