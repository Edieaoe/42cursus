/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yidiliu <yidiliu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 21:28:05 by yiliu             #+#    #+#             */
/*   Updated: 2023/11/28 02:02:16 by yidiliu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_countwords(char const *s, char c)
{
	size_t	count;

	count = 0;
	while (*s && *s == c)
		s++;
	while (*s)
	{
		count++;
		while (*s && *s != c)
			s++;
		while (*s && *s == c)
			s++;
	}
	return (count);
}

size_t	ft_wordlen(char const *s, char c)
{
	size_t	len;

	len = 0;
	while (*s && *s++ != c)
		len++;
	return (len);
}

char	*ft_strndup(char const *s, size_t n)
{
	char	*result;
	size_t	i;

	result = (char *)malloc((n + 1) * sizeof(char));
	if (!result)
		return (0);
	i = 0;
	while (s[i] && i < n)
	{
		result[i] = s[i];
		i++;
	}
	result[i] = '\0';
	return (result);
}

void	ft_write_words(char const *s, char c, char **result, size_t i)
{
	size_t	wordlen;

	while (*s && *s == c)
		s++;
	wordlen = ft_wordlen(s, c);
	result[i] = ft_strndup(s, wordlen);
	if (!(result[i]))
	{
		while (--i > 0)
			free(result[i]);
		free(result);
	}
	s += wordlen;
}

char	**ft_split(char const *s, char c)
{
	char	**result;
	size_t	words;
	size_t	i;

	words = ft_countwords(s, c);
	result = (char **)malloc((words + 1) * sizeof(char *));
	if (!result)
		return (0);
	i = 0;
	while (i < words)
	{
		ft_write_words(s, c, result, i);
		i++;
	}
	result[i] = NULL;
	return (result);
}

// int	main()
// {
// 	char	**result;
// 	int		i;

// 	i = 0;
// 	result = ft_split("i am so happy", ' ');
// 	while (result[i])
// 		printf("%s\n", result[i++]);
// }
