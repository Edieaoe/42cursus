/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yiliu <yiliu@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 21:28:05 by yiliu             #+#    #+#             */
/*   Updated: 2023/11/12 22:11:43 by yiliu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_split(char const *s, char c)
{
	char	**result;
	size_t	words;
	size_t	slen;

	words = 0;
	while (*s)
	{
		if (*s != c && (*(s + 1) == c || *(s + 1) == '\0'))
			words++;
		s++;
	}
	result = (char **)malloc((words + 1) * sizeof(char *));
	if (!result)
		return (0);
	while (s)
	slen = ft_strlen(s);
	while (words > 0)
	{
		result[words-- - 1] = (char *)malloc((slen + 1) * sizeof(char));
		if (!result)
			return (0);

	}
}
