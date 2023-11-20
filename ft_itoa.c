/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gablee <gablee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 11:01:50 by gablee            #+#    #+#             */
/*   Updated: 2023/11/16 11:01:52 by gablee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	how_long(long long m)
{
	int	i;

	i = 0;
	if (m == 0)
		return (1);
	if (m < 0)
		i += 1;
	while (m != 0)
	{
		m /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	long long	m;
	int			sign;
	int			len;
	char		*result;

	m = (long long)n;
	sign = 1;
	len = how_long(m);
	result = (char *)malloc(len + 1);
	if (!result)
		return (0);
	if (m < 0)
	{
		sign = sign * -1;
		m = m * -1;
	}
	result[len--] = '\0';
	while (len >= 0)
	{
		result[len--] = m % 10 + '0';
		m /= 10;
	}
	if (sign == -1)
		result[0] = '-';
	return (result);
}
