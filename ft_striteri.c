/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yidiliu <yidiliu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 22:12:16 by yidiliu           #+#    #+#             */
/*   Updated: 2023/11/30 23:29:57 by yidiliu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	int	i;

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
