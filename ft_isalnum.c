/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jebravo- <jebravo-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 16:27:17 by jebravo-          #+#    #+#             */
/*   Updated: 2024/04/16 15:03:42 by jebravo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if (ft_isalpha(c) || ft_isdigit(c))
		return (1);
	return (0);
}
// #include <stdio.h>
// #include <ctype.h>

// int	main(void)
// {
// 	printf("El resultado es %d\n", ft_isalnum('a'));
// 	printf("El resultado es %d\n", isalnum('a'));
// 	return (0);
// }
