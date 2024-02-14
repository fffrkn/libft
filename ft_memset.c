/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fturk <42istanbul.com.tr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 11:03:26 by fturk             #+#    #+#             */
/*   Updated: 2023/07/24 08:46:11 by fturk            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *pointer, int modifier, size_t length)
{
	unsigned char	*ptr;
	size_t			i;

	ptr = (unsigned char *)pointer;
	i = 0;
	while (i < length)
	{
		ptr[i] = modifier;
		i++;
	}
	return (pointer);
}
