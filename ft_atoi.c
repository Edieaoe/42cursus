/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yidiliu <yidiliu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 22:48:34 by yiliu             #+#    #+#             */
/*   Updated: 2023/12/01 00:27:26 by yidiliu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isspace(char c)
{
	if ((c >= 9 && c <= 13) || c == ' ')
		return (1);
	return (0);
}

static long	checknum(long n, const char *s, int flag)
{
	if (flag == 1 && (n > LONG_MAX / 10
			|| (n == LONG_MAX / 10 && *s - '0' >= LONG_MAX % 10)))
		return (LONG_MAX);
	else if (flag == -1 && (-n < LONG_MIN / 10
			|| (-n == LONG_MIN / 10 && -(*s - '0') <= LONG_MIN % 10)))
		return (LONG_MIN);
	else
	{
		n *= 10;
		n += *s++ - '0';
	}
	return (n);
}

int	ft_atoi(const char *str)
{
	int		flag;
	long	result;

	flag = 1;
	result = 0;
	while (ft_isspace(*str))
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str++ == '-')
			flag *= -1;
	}
	while (ft_isdigit(*str))
	{
		result = checknum(result, str, flag);
		str++;
	}
	return (result * flag);
}
