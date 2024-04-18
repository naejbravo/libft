/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jebravo- <jebravo-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 15:36:15 by jebravo-          #+#    #+#             */
/*   Updated: 2024/04/18 20:17:33 by jebravo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char		*pdst;
	const char	*psrc;
	size_t		i;

	pdst = (char *)dst;
	psrc = (const char *)src;
	i = 0;
	if ((pdst != NULL) || (psrc != NULL))
	{
		while (i < n)
		{
			pdst[i] = psrc[i];
			i++;
		}
	}
	return (dst);
}

// int	main(void)
// {
// 	char src[5] = "hola";
// 	char dst[5] = "jean";

// 	ft_memcpy(dst, src, 2);
// 	// memcpy(dst, src, 6);
// 	printf("src = %s\n", src);
// 	printf("dst = %s\n", dst);
// 	return (0);
// }