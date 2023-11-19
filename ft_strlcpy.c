/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gablee <gablee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 14:28:01 by gablee            #+#    #+#             */
/*   Updated: 2023/11/01 14:28:13 by gablee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	unsigned char		*d;
	const unsigned char	*s;
	size_t				len;

	d = (unsigned char *)dst;
	s = (const unsigned char *)src;
	len = 0;
	if (dst && !src)
		return (0);
	if (size == 0)
		return (ft_strlen(src));
	while (src[len] != '\0' && len < size - 1)
	{
		d[len] = s[len];
		len++;
	}
	d[len] = '\0';
	while (s[len] != '\0')
		len++;
	return (len);
}
