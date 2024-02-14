/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fturk <42istanbul.com.tr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 08:24:55 by fturk             #+#    #+#             */
/*   Updated: 2023/07/21 18:55:44 by fturk            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *source, size_t x)
{
	size_t	i;
	char	*dst;
	char	*src;

	i = 0;
	dst = (char *)dest;
	src = (char *)source;
	if (dest == 0 && source == 0)
		return (0);
	while (i < x)
	{
		dst[i] = src[i];
		i++;
	}
	return (dest);
}
