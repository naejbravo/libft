/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jebravo- <jebravo-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 17:17:11 by jebravo-          #+#    #+#             */
/*   Updated: 2024/04/16 19:37:57 by jebravo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char		*pdst;
	const char	*psrc;
	size_t		i;
	size_t		j;

	pdst = (char *)dst;
	psrc = (const char *)src;
	i = 0;
	j = len;
	if (pdst < psrc)
	{
		while (i < len)
		{
			pdst[i] = psrc[i];
			i++;
		}
	}
	else
	{
		while (j < 0)
		{
			pdst[j - 1] = psrc[j - 1];
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