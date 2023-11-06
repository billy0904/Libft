/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gablee <gablee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 14:30:53 by gablee            #+#    #+#             */
/*   Updated: 2023/11/01 14:31:03 by gablee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*str;
	unsigned char		num;

	str = (const unsigned char *)s;
	num = (unsigned char)c;
	while (n)
	{
		if (*str == num)
			return ((void *)str);
		str++;
		n--;
	}
	return (0);
}
