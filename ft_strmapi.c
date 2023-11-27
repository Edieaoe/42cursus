/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yidiliu <yidiliu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 17:05:00 by yidiliu           #+#    #+#             */
/*   Updated: 2023/11/26 18:21:59 by yidiliu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strmapi(char const *s, char (*f)(unsigned
int, char))
{
    unsigned char   *u;
    char            *result;
    size_t          len;

    len = ft_strlen(s);
    result = (char *)malloc((len + 1) * sizeof(char));
    if (!result)
        return (NULL);
    result[len] = '\0';
    u = (unsigned char *)s;
    while (len-- > 0)
        result[len] = f(len, u[len]);
    return (result);
}