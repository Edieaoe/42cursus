/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yidiliu <yidiliu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 12:12:03 by yidiliu           #+#    #+#             */
/*   Updated: 2023/11/27 23:27:45 by yidiliu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_putnbr_fd(int n, int fd)
{
    long int    num;

    num = n;
    if (num < 0)
    {
        ft_putchar_fd('-', fd);
        num = -n;
    }
    if (n > 9)
        ft_putnbr_fd(num / 10, fd);
    ft_putchar_fd(num % 10 + '0', fd);
}
