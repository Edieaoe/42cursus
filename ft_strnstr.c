/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yiliu <yiliu@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 22:48:34 by yiliu             #+#    #+#             */
/*   Updated: 2023/12/26 15:47:21 by yiliu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	nlen;

	if (*needle == '\0')
		return ((char *)haystack);
	if (len == 0)
		return (NULL);
	nlen = ft_strlen(needle);
	while (*haystack && len-- >= nlen)
	{
		if (*haystack == *needle && ft_strncmp(haystack, needle, nlen) == 0)
			return ((char *)haystack);
		haystack++;
	}
	return (NULL);
}
