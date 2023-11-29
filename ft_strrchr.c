/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yidiliu <yidiliu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 22:04:04 by yiliu             #+#    #+#             */
/*   Updated: 2023/11/29 17:02:46 by yidiliu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	slen;

	slen = ft_strlen(s);
	while (slen >= 0 && *(s + slen) != (unsigned char)c)
		slen--;
	if (slen >= 0 && *(s + slen) == (unsigned char)c)
		return ((char *)(s + slen));
	return (0);
}

// int	main()
// {
// 	// printf("%s\n", ft_strrchr("asdkfhaskhdfsdf", '1'));
// 	char s[] = "tripouille";

// 	ft_strrchr(s, 't' + 256); //ft_strrchr(s, 't' + 256) == s
// }
