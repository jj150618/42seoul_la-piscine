/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junghkim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/16 16:05:16 by junghkim          #+#    #+#             */
/*   Updated: 2020/08/18 22:08:09 by junghkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0')
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		len;
	char	*sum_strs;

	if (size == 0)
	{
		sum_strs = (char *)malloc(sizeof(char) * 1);
		sum_strs[0] = 0;
		return (sum_strs);
	}
	len = ft_strlen(sep) * (size - 1);
	i = -1;
	while (++i < size)
		len += ft_strlen(strs[i]);
	sum_strs = (char *)malloc(sizeof(char) * (len + 1));
	i = -1;
	sum_strs[0] = '\0';
	while (++i < size - 1)
	{
		sum_strs = ft_strcat(sum_strs, strs[i]);
		sum_strs = ft_strcat(sum_strs, sep);
	}
	sum_strs = ft_strcat(sum_strs, strs[i]);
	return (sum_strs);
}
