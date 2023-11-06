/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gablee <gablee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 14:32:38 by gablee            #+#    #+#             */
/*   Updated: 2023/11/01 14:32:53 by gablee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	unsigned char	*tmp;
	unsigned char	*p;
	size_t			i;

	if (count * size != (size_t)(count * size))
		return (0);
	tmp = malloc(count * size);
	if (!tmp)
		return (0);
	p = tmp;
	i = count * size;
	while (i)
	{
		*p = 0;
		p++;
		i--;
	}
	return ((void *)tmp);
}
