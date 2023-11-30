/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yidiliu <yidiliu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 22:48:34 by yiliu             #+#    #+#             */
/*   Updated: 2023/11/29 22:42:57 by yidiliu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*result;

	if (size != 0 && count > SIZE_MAX / size)
	{
		// printf("111\n");
		return (0);
	}
	result = malloc(count * size);
	if (!result)
		return (NULL);
	// printf("222\n");
	ft_bzero(result, count * size);
	return (result);
}

// #include <libc.h>
// __attribute__((destructor))
// static void	destructor(void)
// {
// 	system("leaks -q a.out");
// }

// int main()
// {
// 	ft_calloc(INT_MIN, INT_MIN);
// }
