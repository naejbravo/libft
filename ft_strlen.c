/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jebravo- <jebravo-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 17:11:35 by jebravo-          #+#    #+#             */
/*   Updated: 2024/04/16 17:12:52 by jebravo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

// #include <stdio.h>
// #include <ctype.h>

// int	main(void)
// {
// 	char *str = "holaa";
// 	printf("el resultado es %zu\n", ft_strlen(str));
// 	printf("el resultado es %zu\n", strlen(str));
// 	return (0);
// }