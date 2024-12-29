/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kokamoto <kokamoto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/26 11:36:50 by kokamoto          #+#    #+#             */
/*   Updated: 2024/12/29 10:24:35 by kokamoto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}					t_list;

size_t				ft_strlen(const char *str);
int					ft_numlen(long long n);
int					ft_hexlen(unsigned long long n);
char				ft_strchr_n(const char *s, int c);
void				ft_putunsignedint_fd(unsigned int n, int fd);
void				ft_put_uint_hex_fd(unsigned int n, int fd, char format);
void				ft_putchar_fd(char c, int fd);
void				ft_putstr_fd(char *s, int fd);
void				ft_putunsignedint_fd(unsigned int n, int fd);
void				ft_put_uint_hex_fd(unsigned int n, int fd, char format);
int					ft_putpointer_fd(void *p, int fd);
int					ft_printf(const char *format, ...);
void				ft_lstadd_front(t_list **lst, t_list *new);
t_list				*ft_lstnew(void *cnt);

#endif