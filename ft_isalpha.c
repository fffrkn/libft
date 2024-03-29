/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fturk <42istanbul.com.tr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 12:17:44 by fturk             #+#    #+#             */
/*   Updated: 2023/07/21 18:55:09 by fturk            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int i)
{
	if (('a' <= i && 'z' >= i) || ('A' <= i && 'Z' >= i))
		return (1);
	return (0);
}
