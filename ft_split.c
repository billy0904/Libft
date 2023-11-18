/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gablee <gablee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 11:01:35 by gablee            #+#    #+#             */
/*   Updated: 2023/11/16 11:01:37 by gablee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	checksep(char c, char *charset)
{
	int	i;

	i = 0;
	while (charset[i])
	{
		if (charset[i] == c)
			return (1);
		i++;
	}
	return (0);
}

static int	cnt(char *str, char *charset)
{
	int	i;
	int	c;

	i = 0;
	c = 1;
	while (str[i])
	{
		if (checksep(str[i], charset) && !(checksep(str[i + 1], charset)))
			c++;
		i++;
	}
	return (c);
}

static int	slen(char *str, char *charset)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (checksep(str[i], charset))
			return (i);
		i++;
	}
	return (i);
}

static char	*newarr(char *str, char *charset)
{
	int		i;
	int		len;
	char	*new;

	len = slen(str, charset);
	new = (char *)malloc(sizeof(char) * (len + 1));
	if (!(new))
		return (0);
	i = 0;
	while (i < len)
	{
		new[i] = str[i];
		i++;
	}
	new[i] = '\0';
	return (new);
}

char	**ft_split(char *str, char *charset)
{
	char	**arr;
	int		i;
	int		size;

	size = cnt(str, charset);
	arr = (char **)malloc(sizeof(char *) * (size + 1));
	i = 0;
	while (*str != '\0')
	{
		while (*str != '\0' && checksep(*str, charset))
			str++;
		if (*str != '\0')
		{
			arr[i] = newarr(str, charset);
			i++;
		}
		while (*str != '\0' && !(checksep(*str, charset)))
			str++;
	}
	arr[i] = 0;
	return (arr);
}
