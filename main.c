/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kokamoto <kokamoto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/26 11:06:13 by kokamoto          #+#    #+#             */
/*   Updated: 2024/12/31 02:19:55 by kokamoto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    sort_three(t_list **a)
{
    int first;
    int second;
    int third;

    first = *(int *)(*a)->content;
    second = *(int *)(*a)->next->content;
    third = *(int *)(*a)->next->next->content;
    if (first > second && second > third)
    {
        sa(a);
        rra(a);
    }
    else if (first > second && first > third)
        ra(a);
    else if (first > second)
        sa(a);
    else if (second > third && first > third)
        rra(a);
    else if (second > third)
    {
        sa(a);
        ra(a);
    }
}

void    sort(t_list **a, t_list **b)
{
    int size;

    size = ft_lstsize(*a);
    if (size == 2)
        sa(a);
    else if (size == 3)
        sort_three(a);
    else if (size <= 10)
        sort_small(a, b);
    else
        quick_sort(a, b);
}

int	main(int argc, char *argv[])
{
	t_list	*a;
	t_list	*b;
	long	num;
	int		*content;
    int    *array;

	if (argc < 2)
		return (0);
	a = NULL;
	b = NULL;
	while (--argc)
	{
		if (!is_valid_number(argv[argc], &num) || has_duplicate(a, num))
			error_exit(&a, &b);
		content = (int *)malloc(sizeof(int));
		if (!content)
			error_exit(&a, &b);
		*content = num;
		ft_lstadd_front(&a, ft_lstnew(content)); //lstadd_backが正しい気がする。
	}
    if (!(array = create_array_index(a, ft_lstsize(a))))
        return (0);
    sort_array_index(array, ft_lstsize(a));    
    assign_sort_index(array, a, ft_lstsize(a));
	if (!is_sorted(a))
		sort(&a, &b);
	ft_lstclear(&a, free);
	ft_lstclear(&b, free);
	return (0);
}
