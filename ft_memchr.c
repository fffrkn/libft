/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fturk <42istanbul.com.tr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 16:16:41 by fturk             #+#    #+#             */
/*   Updated: 2023/07/21 18:55:36 by fturk            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *ptr, int value, size_t byts)
{
	size_t	i;

	i = 0;
	while (i < byts)
	{
		if (((unsigned char *)ptr)[i] == (unsigned char)value)
			return ((void *)ptr + i);
		i++;
	}
	return (0);
}
