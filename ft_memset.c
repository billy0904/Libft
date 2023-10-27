/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gablee <gablee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 12:25:59 by gablee            #+#    #+#             */
/*   Updated: 2023/10/09 12:26:07 by gablee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_memset(void *b, int c, size_t len)
{
	int		i;
	char	*arr;

	arr = (char *)b;
	i = 0;
	while (i < len)
	{
		arr[i] = (char)c;
		i++;
	}
	return (arr);
}
