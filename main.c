/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kokamoto <kokamoto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/26 11:06:13 by kokamoto          #+#    #+#             */
/*   Updated: 2024/12/29 10:22:07 by kokamoto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char *argv[])
{
	t_list	*a;
	t_list	*b;
	long	num;
	int		*content;

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
		ft_lstadd_front(&a, ft_lstnew(content));
	}
	if (!is_sorted(a))
		quick_sort(&a, &b);
	ft_lstclear(&a, free);
	ft_lstclear(&b, free);
	return (0);
}
