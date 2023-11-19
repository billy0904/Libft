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

static int	how_long(long long n)
{
	int	i;

	i = 0;
	if (n == 0)
		return (1);
	if (n < 0)
		i += 1;
	while (n != 0)
	{
		n /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char		*result;
	long long	m;
	int			sign;
	int			len;

	m = (long long)n;
	sign = 1;
	len = how_long(m);
	if (m < 0)
	{
		sign *= -1;
		m *= -1;
	}
	result = (char *)malloc(len + 1);
	if (!result)
		return (0);
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
