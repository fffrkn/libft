/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fturk <42istanbul.com.tr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 17:29:02 by fturk             #+#    #+#             */
/*   Updated: 2023/07/21 16:15:33 by fturk            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	i;
	size_t	alen;

	alen = len;
	if (start < 0 || start > (unsigned int)ft_strlen(s))
		return (ft_strdup(""));
	if (start + len > (size_t)ft_strlen(s))
		alen = ft_strlen(s) - start;
	i = 0;
	substr = (char *)malloc(alen + 1);
	if (substr == NULL)
		return (NULL);
	while (alen > 0 && *s)
	{
		substr[i] = s[start + i];
		i++;
		alen--;
	}
	substr[i] = '\0';
	return (substr);
}
