/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yiliu <yiliu@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 22:12:16 by yidiliu           #+#    #+#             */
/*   Updated: 2023/12/19 17:55:39 by yiliu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	if (!s || !f)
		return ;
	i = 0;
	while (s[i])
	{
		f(i, s + i);
		i++;
	}
}

// void	ft_striteri(char *s, void (*f)(unsigned int, char*))
// {
// 	int	len;

// 	if (!s)
// 		return ;
// 	len = ft_strlen(s);
// 	while (len-- > 0)
// 		f(len, &s[len]);
// }
