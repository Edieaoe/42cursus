/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yiliu <yiliu@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 22:04:04 by yiliu             #+#    #+#             */
/*   Updated: 2023/11/11 21:30:37 by yiliu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*strrchr(const char *s, int c)
{
	size_t	slen;

	slen = ft_strlen(s);
	while (*(s + slen) != c && slen >= 0)
		slen--;
	if (*(s + slen) == c)
		return ((char *)(s + slen));
	return (0);
}
