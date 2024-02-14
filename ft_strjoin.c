/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fturk <42istanbul.com.tr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 14:31:47 by fturk             #+#    #+#             */
/*   Updated: 2023/07/21 19:04:44 by fturk            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*strg;
	size_t	i;
	size_t	j;

	i = ft_strlen(s1);
	j = ft_strlen(s2);
	strg = (char *)malloc((i + j + 1) * 1);
	if (strg == 0)
		return (0);
	i = 0;
	j = 0;
	while (s1[i])
	{
		strg[i] = s1[i];
		i++;
	}
	while (s2[j])
	{
		strg[i] = s2[j];
		i++;
		j++;
	}
	strg[i] = '\0';
	return (strg);
}
