/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gablee <gablee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 14:33:06 by gablee            #+#    #+#             */
/*   Updated: 2023/11/01 14:33:19 by gablee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

ft_strlen(char *str);

*ft_strcpy(char *dest, char *src);

char	*ft_strdup(char *src)
{
	char	*dup;

	dup = (char *)malloc(sizeof(char) * (slen(src) + 1));
	if (!(dup))
		return (0);
	scpy(dup, src);
	return (dup);
}
