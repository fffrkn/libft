/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fturk <42istanbul.com.tr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 19:16:56 by fturk             #+#    #+#             */
/*   Updated: 2023/07/21 20:13:28 by fturk            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	trimfirst(const char *s1, const char *set)
{
	int	i;
	int	j;

	j = 0;
	while (s1[j])
	{
		i = 0;
		while (set[i])
		{
			if (s1[j] == set[i])
				break ;
			i++;
		}
		if (!set[i])
			break ;
		j++;
	}
	return (j);
}

static int	trimlast(const char *s1, const char *set)
{
	int	i;
	int	len;

	len = ft_strlen(s1) - 1;
	while (len >= 0)
	{
		i = 0;
		while (set[i])
		{
			if (s1[len] == set[i])
				break ;
			i++;
		}
		if (!set[i])
			break ;
		len--;
	}
	return (len + 1);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		j;
	int		len;
	char	*str;
	int		k;

	j = trimfirst(s1, set);
	i = trimlast(s1, set);
	len = i - j + 1;
	if (len <= 0)
		return (ft_strdup(""));
	str = (char *)malloc(len);
	if (str == NULL)
		return (NULL);
	k = 0;
	while (j < i)
	{
		str[k] = s1[j];
		j++;
		k++;
	}
	str[k] = '\0';
	return (str);
}
