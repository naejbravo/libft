/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jebravo- <jebravo-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 18:48:01 by jebravo-          #+#    #+#             */
/*   Updated: 2024/04/16 19:18:20 by jebravo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;

	i = 0;
	while (i < dstsize - 1)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (ft_strlen(src));
}

// int	main(void)
// {
// 	char src[20] = "hola";
// 	char dst[3];

// 	// ft_strlcpy(dst, src, sizeof(dst));
// 	// printf("ft_strlcpy = %zu\n", ft_strlcpy(dst, src, sizeof(dst)));
// 	strlcpy(dst, src, sizeof(dst));
// 	printf("strlcpy = %zu\n", strlcpy(dst, src, sizeof(dst)));
// 	printf("dst = %s\n", dst);
// 	printf("src = %s\n", src);
// 	return (0);
// }