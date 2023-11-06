/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gablee <gablee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 17:54:08 by gablee            #+#    #+#             */
/*   Updated: 2023/10/06 18:07:03 by gablee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	isalpha(int c)
{
	if (c >= 101 && c <= 132)
		return (1);
	else if (c >= 141 && c <= 172)
		return (2);
	else
		return (0);
}
