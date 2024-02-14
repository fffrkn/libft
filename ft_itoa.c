/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fturk <42istanbul.com.tr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 14:31:18 by fturk             #+#    #+#             */
/*   Updated: 2023/07/21 19:57:23 by fturk            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static unsigned int	ft_lensize(int n)
{
	unsigned int	length;

	length = 0;
	if (n == 0)
		length = 1;
	else if (n < 0)
		length += 1;
	while (n != 0)
	{
		n /= 10;
		length++;
	}
	return (length);
}

char	*ft_itoa(int n)
{
	char			*str;
	unsigned int	length;
	unsigned int	num;

	length = ft_lensize(n);
	str = (char *)malloc((length + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);
	if (n < 0)
	{
		str[0] = '-';
		num = -n;
	}
	else
		num = n;
	if (num == 0)
		str[0] = '0';
	str[length] = '\0';
	while (num != 0)
	{
		str[length - 1] = (num % 10) + '0';
		num = num / 10;
		length -= 1;
	}
	return (str);
}
