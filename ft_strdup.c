/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yiliu <yiliu@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 22:48:34 by yiliu             #+#    #+#             */
/*   Updated: 2023/12/26 15:46:46 by yiliu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	size_t	slen;
	char	*copy;

	slen = ft_strlen(s1);
	copy = (char *)malloc((slen + 1) * sizeof(char));
	if (!copy)
		return (NULL);
	ft_memcpy(copy, s1, slen);
	copy[slen] = '\0';
	return (copy);
}
