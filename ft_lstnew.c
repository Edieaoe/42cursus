/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yidiliu <yidiliu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 19:59:05 by yidiliu           #+#    #+#             */
/*   Updated: 2023/11/27 20:08:19 by yidiliu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list  *ft_lstnew(void *content)
{
    t_list  *result;
    
    result = (t_list *)malloc(1 * sizeof(t_list));
    if (!result)
        return (NULL);
    result->content = content;
    result->next = NULL;
    return (result);
}