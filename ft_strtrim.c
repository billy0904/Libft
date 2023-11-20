/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gablee <gablee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 11:01:15 by gablee            #+#    #+#             */
/*   Updated: 2023/11/16 11:01:18 by gablee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int		head;
	int		tail;
	char	*result;

	if (!s1 || !set)
		return (0);
	head = 0;
	tail = ft_strlen(s1);
	while (head != tail && ft_strchr(set, s1[head]))
		head++;
	if (head == tail)
	{
		result = (char *)malloc(1);
		if (!result)
			return (0);
		*result = 0;
		return (result);
	}
	while (tail != 0 && ft_strchr(set, s1[tail]))
		tail--;
	result = (char *)malloc(sizeof(char) * (tail - head + 2));
	if (!result)
		return (0);
	ft_strlcpy(result, &s1[head], tail - head + 2);
	return (result);
}
