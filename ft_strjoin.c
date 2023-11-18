/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gablee <gablee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 11:00:49 by gablee            #+#    #+#             */
/*   Updated: 2023/11/16 11:00:51 by gablee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*new;
	int		s1_len;
	int		s2_len;
	int		i;

	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	new = (char *)malloc(sizeof(char) * (s1_len + s2_len + 1));
	if (!new)
		return (0);
	i = 0;
	while (i < s1_len)
	{
		new[i] = s1[i];
		i++;
	}
	while (i - s1_len < s2_len)
	{
		new[i] = s2[i - s1_len];
		i++;
	}
	new[i] = '\0';
	return (new);
}
