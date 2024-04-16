/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jebravo- <jebravo-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 16:31:48 by jebravo-          #+#    #+#             */
/*   Updated: 2024/04/16 19:10:19 by jebravo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// for test
#include <stdio.h>
#include <string.h>

#include <stddef.h>

//prototypes
int		ft_isdigit(int c);
int		ft_isalpha(int c);

void	*ft_memset(void *b, int c, size_t len);
size_t	ft_strlen(const char *s);