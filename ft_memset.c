/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jebravo- <jebravo-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 17:39:10 by jebravo-          #+#    #+#             */
/*   Updated: 2024/04/16 18:04:37 by jebravo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			i;
	unsigned char	*p;

	i = 0;
	p = (unsigned char *)b;
	while (i < len)
	{
		p[i] = c;
		i++;
	}
	return (b);
}

// #include <stdio.h>
// #include <ctype.h>

// int	main(void)
// {
// 	char memory[8];
// 	// printf("antes de rellenarlo %s\n", memory);
// 	// memset(memory, 'X', 1);
// 	// printf("despues de rellenarlo %s\n", memory);
// 	printf("antes de rellenarlo %s\n", memory);
// 	ft_memset(memory, 'X', 8);
// 	printf("despues de rellenarlo %s\n", memory);
// 	return (0);
// }
