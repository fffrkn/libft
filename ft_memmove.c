/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fturk <42istanbul.com.tr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 09:48:10 by fturk             #+#    #+#             */
/*   Updated: 2023/07/21 19:38:57 by fturk            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *source, size_t x)
{
	size_t	i;

	if (dest == 0 && source == 0)
		return (0);
	if (dest > source)
	{
		i = x;
		while (i > 0)
		{
			i--;
			((char *)dest)[i] = ((char *)source)[i];
		}
	}
	else
	{
		i = 0;
		while (i < x)
		{
			((char *)dest)[i] = ((char *)source)[i];
			i++;
		}
	}
	return (dest);
}
