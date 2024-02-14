/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fturk <42istanbul.com.tr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 16:33:11 by fturk             #+#    #+#             */
/*   Updated: 2023/07/21 18:54:47 by fturk            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t unit, size_t size)
{
	void	*dst;

	dst = (void *)malloc(unit * size);
	if (dst == 0)
		return (0);
	ft_bzero(dst, unit * size);
	return (dst);
}
