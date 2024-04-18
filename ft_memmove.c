/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jebravo- <jebravo-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 17:17:11 by jebravo-          #+#    #+#             */
/*   Updated: 2024/04/18 20:25:08 by jebravo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t		i;
	size_t		j;

	i = 0;
	j = len;
	if ((char *)dst < (const char *)src)
	{
		while (i < len)
		{
			((char *)dst)[i] = ((const char *)src)[i];
			i++;
		}
	}
	else
	{
		while (j < 0)
		{
			((char *)dst)[j - 1] = ((const char *)src)[j - 1];
			j--;
		}
	}
	return (dst);
}

// int	main(void)
// {
// 	char src[5] = "hola";
// 	char dst[5] = "jean";

// 	ft_memmove(dst, src, 4);
// 	memmove(dst, src, 6);
// 	printf("src = %s\n", src);
// 	printf("dst = %s\n", dst);
// 	return (0);
// }