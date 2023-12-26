/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yiliu <yiliu@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 17:38:19 by yiliu             #+#    #+#             */
/*   Updated: 2023/12/26 15:47:44 by yiliu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*result;
	size_t	slen;

	if (!s)
		return (NULL);
	slen = ft_strlen(s);
	if (slen < start)
		len = 0;
	if ((slen - start) < len)
		len = slen - start;
	result = (char *)malloc((len + 1) * sizeof(char));
	if (!result)
		return (NULL);
	ft_memcpy(result, s + start, len);
	result[len] = '\0';
	return (result);
}
