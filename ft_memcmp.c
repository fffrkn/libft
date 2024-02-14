/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fturk <42istanbul.com.tr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 16:17:39 by fturk             #+#    #+#             */
/*   Updated: 2023/07/09 14:34:48 by fturk            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*c1;
	unsigned char	*d;
	size_t			j;

	c1 = (unsigned char *)s1;
	d = (unsigned char *)s2;
	j = 0;
	while (j < n)
	{
		if (c1[j] < d[j])
			return ((int)(c1[j] - d[j]));
		if (c1[j] > d[j])
			return ((int)(c1[j] - d[j]));
		j++;
	}
	return (0);
}
