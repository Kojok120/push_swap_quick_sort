#include "push_swap.h"

//デバッグ用関数。スタックの中身を表示
void    print_stack(t_list *stack)
{
	while (stack)
	{
		ft_putint_fd(*(int *)stack->content, 1);
		ft_putchar_fd('\n', 1);
		stack = stack->next;
	}
}
