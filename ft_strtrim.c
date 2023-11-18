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
	int		start;
	int		end;
	char	*result;

	if (!s1 || !set)
		return (0);
	start = 0;
	end = ft_strlen(s1);
	while (start != end && ft_strchr(set, s1[start]))
		start++;
	if (start == end)
	{
		result = (char *)malloc(1);
		if (!result)
			return (0);
		*result = 0;
		return (result);
	}
	while (end != 0 && ft_strchr(set, s1[end]))
		end--;
	result = (char *)malloc(sizeof(char) * (end - start + 2));
	if (!result)
		return (0);
	ft_strlcpy(result, &s1[start], end - start + 2);
	return (result);
}
