/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jebravo- <jebravo-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 11:35:45 by jebravo-          #+#    #+#             */
/*   Updated: 2024/04/16 17:13:43 by jebravo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t			i;
	unsigned char	*p;

	i = 0;
	p = (unsigned char *)s;
	while (i < n)
	{
		p[i] = '\0';
		i++;
	}
}

// #include <stdio.h>
// #include <ctype.h>

// void imprimir_memoria(void *ptr, size_t size) {
//     unsigned char *p = ptr;
//     for (size_t i = 0; i < size; i++) {
//         printf("%02X ", p[i]);
//     }
//     printf("\n");
// }

// int	main(void)
// {
// 	char memory[8];

// 	imprimir_memoria(memory, 8);
// 	ft_bzero(memory, 8);
// 	imprimir_memoria(memory, 8);
// 	// imprimir_memoria(memory, 8);
// 	// bzero(memory, 8);
// 	// imprimir_memoria(memory, 8);
// 	return (0);
// }
