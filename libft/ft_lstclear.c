/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kokamoto <kojokamo120@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 19:20:59 by kokamoto          #+#    #+#             */
/*   Updated: 2024/12/31 14:27:36 by kokamoto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*tmp;

	if (!lst || !del)
		return;

	while (*lst != NULL)
	{
		tmp = (*lst)->next;
		del((*lst)->content);
		del((*lst)->sort_index);
		free(*lst);
		*lst = tmp;
	}
}
