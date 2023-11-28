/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yidiliu <yidiliu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 17:38:19 by yiliu             #+#    #+#             */
/*   Updated: 2023/11/27 23:25:48 by yidiliu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*result;
	size_t	slen;

	result = (char *)malloc((len + 1) * sizeof(char));
	if (!result)
		return (0);
	slen = ft_strlen(s);
	if (slen < start)
		return (0);
	if ((slen - start) < len)
	{
		ft_memcpy(result, s + start, slen - start);
		result[slen - start] = '\0';
	}
	else
	{
		ft_memcpy(result, s + start, len);
		result[len] = '\0';
	}
	return (result);
}