/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kokamoto <kokamoto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/26 11:06:13 by kokamoto          #+#    #+#             */
/*   Updated: 2024/12/26 11:08:07 by kokamoto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



int main (int argc, char *argv[])
{
    //引数が1つでもINT_MAX以上の場合はエラー出力
    if (argc == 1)
    {
        ft_putstr_fd("Error\n", 2);
        return (0);
    }
    return (0);
}