/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fturk <42istanbul.com.tr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 14:19:33 by fturk             #+#    #+#             */
/*   Updated: 2023/07/21 19:27:47 by fturk            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *source, size_t lmt)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0' && i < lmt)
		i++;
	while (source[j] != '\0' && (i + j + 1) < lmt)
	{
		dest[i + j] = source[j];
		j++;
	}
	if (i < lmt)
		dest[i + j] = '\0';
	return (i + ft_strlen(source));
}
