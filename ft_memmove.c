/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gablee <gablee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 14:27:22 by gablee            #+#    #+#             */
/*   Updated: 2023/11/01 14:27:44 by gablee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memmove(void *dst, const void *src, size_t len)
{
    unsigned char *d;
    const unsigned char *s;
    size_t i;

    d = dst;
    s = src;
    i = 0;
    if (!dst && !src)
        return (0);
    if (src < dst)
    {
        while (i < len)
        {
            d[len - 1 - i] = s[len - 1 - i];
            i++;
        }
    }
    else
    {
        i = 1;
        while (i < len + 1)
            d[i - 1] = s[i - 1];
    }
    return (dst);
}