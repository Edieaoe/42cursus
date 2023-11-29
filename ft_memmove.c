/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yidiliu <yidiliu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 20:50:57 by yiliu             #+#    #+#             */
/*   Updated: 2023/11/29 18:40:42 by yidiliu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	void	*d;

	if (!dst && !src)
		return (NULL);
	d = dst;
	if (dst > src && (unsigned long)(dst - src) < len)
		while (len-- > 0)
			((unsigned char *)dst)[len] = ((unsigned char *)src)[len];
	else
		while (len-- > 0)
			*(unsigned char *)dst++ = *(unsigned char *)src++;
	return (d);
}
