/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr_n.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kokamoto <kokamoto@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/14 09:13:11 by kokamoto          #+#    #+#             */
/*   Updated: 2024/07/14 09:17:35 by kokamoto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	ft_strchr_n(const char *s, int c)
{
	int	i;

	i = 0;
	while (*(s + i))
	{
		if (*(s + i) == c)
			return (s[i]);
		i++;
	}
	return (-1);
}
