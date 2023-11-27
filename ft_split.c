/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yidiliu <yidiliu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 21:28:05 by yiliu             #+#    #+#             */
/*   Updated: 2023/11/27 23:34:22 by yidiliu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// char	**ft_split(char const *s, char c)
// {
// 	char	**result;
// 	size_t	words;
// 	size_t	slen;
//     size_t  i;
//     size_t  j;

// 	words = 0;
// 	while (*s)
// 	{
// 		if (*s != c && (*(s + 1) == c || *(s + 1) == '\0'))
// 			words++;
// 		s++;
// 	}
// 	result = (char **)malloc((words + 1) * sizeof(char *));
// 	if (!result)
// 		return (0);
// 	slen = ft_strlen(s);
//     i = 0;
//     while (*s)
//     {
//         while (*s != c && i < words)
//         {
//             result[i] = (char *)malloc((slen + 1) * sizeof(char));
//             if (!result)
//             {
//                 while (--i > -1)
//                     free (result[i]);
//                 free (result);
//                 return (0);
//             }
//             j = 0;
//             while (*s != c)
//                 result[i][j] = *s++;
//             result[i][j] = '\0';
//             i++;
//         }
//         s++;
//     }
//     result[words] = '\0';
//     return (result);
// }

size_t  ft_countwords(char const *s, char c)
{
    size_t  count;

    count = 0;
    while(*s && *s == c)
        s++;
    while(*s)
    {
        count++;
        while (*s != c)
            s++;
        while (*s == c)
            s++;
    }
    return (count);
}

size_t  ft_wordlen(char const *s, char c)
{
    size_t  len;

    len = 0;
    while (*s && *s != c)
        len++;
    return (len);
}

char    *ft_strndup(char const *s, size_t n)
{
    char    *result;
    size_t  i;

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

void    ft_freearray(char **s, size_t n)
{
    while (n-- > 0)
        free (s[n]);
    free (s);
}

char	**ft_split(char const *s, char c)
{
    char    **result;
    size_t  words;
    size_t  wordlen;
    size_t  i;

    words = ft_countwords(s, c);
    result = (char **)malloc((words + 1) * sizeof(char *));
    if (!result)
        return (0);
    i = 0;
    while (i < words)
    {
        while (*s && *s == c)
            s++;
        wordlen = ft_wordlen(s, c);
        if (!(result[i] = ft_strndup(s, wordlen)))
        {
            ft_freearray(result, i - 1);
            return (0);
        }
        s += wordlen;
        i++;
    }
    result[i] = NULL;
    return (result);
}
