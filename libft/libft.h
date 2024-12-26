/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kokamoto <kokamoto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/26 11:36:50 by kokamoto          #+#    #+#             */
/*   Updated: 2024/12/26 11:53:32 by kokamoto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdarg.h>

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
int                 ft_printf(const char *format, ...);

#endif