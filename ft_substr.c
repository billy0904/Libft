/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gablee <gablee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 11:00:16 by gablee            #+#    #+#             */
/*   Updated: 2023/11/16 11:00:21 by gablee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;

	if (ft_strlen(s) <= start)
	{
		str = (char *)malloc(1);
		if (!str)
			return (0);
		*str = 0;
		return (str);
	}
	if (len > ft_strlen(s) - start)
		len = ft_strlen(s) - start;
	str = (char *)malloc(sizeof(char) * len + 1);
	if (!str)
		return (0);
	ft_strlcpy(str, &s[start], len + 1);
	return (str);
}
