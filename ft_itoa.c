/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yidiliu <yidiliu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 13:35:24 by yidiliu           #+#    #+#             */
/*   Updated: 2023/11/30 22:54:03 by yidiliu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_digits(int n)
{
	long int	num;
	size_t		count;
	size_t		flag;

	num = n;
	count = 1;
	flag = 0;
	if (num < 0)
	{
		flag = 1;
		num = -num;
	}
	while (num / 10 > 0)
	{
		count = count + 1;
		num = num / 10;
	}
	return (flag + count);
}

char	*ft_itoa(int n)
{
	char		*result;
	long int	num;
	size_t		digits;
	size_t		i;

	num = n;
	digits = count_digits(n);
	i = 0;
	result = (char *)malloc((digits + 1) * sizeof(char));
	if (!result)
		return (NULL);
	result[digits] = '\0';
	if (num < 0)
	{
		result[0] = '-';
		i++;
		num = -num;
	}
	while (i < digits)
	{
		result[digits-- - 1] = num % 10 + '0';
		num = num / 10;
	}
	return (result);
}

// int main()
// {
//     int n = -214748;

//     printf("digits = %zu\n", count_digits(n));
//     printf("ft = %s\n", ft_itoa(n));
// }
