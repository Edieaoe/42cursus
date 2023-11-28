/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yidiliu <yidiliu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 22:04:04 by yiliu             #+#    #+#             */
/*   Updated: 2023/11/28 01:09:22 by yidiliu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	slen;

	slen = ft_strlen(s);
	while (slen >= 0 && *(s + slen) != c)
		slen--;
	if (slen >= 0 && *(s + slen) == c)
		return ((char *)(s + slen));
	return (0);
}

// int	main()
// {
// 	printf("%s\n", ft_strrchr("asdkfhaskhdfsdf", '1'));	
// }