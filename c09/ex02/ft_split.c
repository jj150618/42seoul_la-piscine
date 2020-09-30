/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junghkim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/17 20:37:41 by junghkim          #+#    #+#             */
/*   Updated: 2020/08/20 17:10:22 by junghkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char			ft_check_charset(char c, char *charset)
{
	int i;

	i = -1;
	while (charset[++i] != '\0')
	{
		if (charset[i] == c)
			return (1);
	}
	return (0);
}

unsigned int	count_str(char *str, char *charset)
{
	int i;
	int cnt;

	cnt = 0;
	i = 0;
	if (str[i] && !ft_check_charset(str[i], charset))
	{
		cnt++;
		i++;
	}
	while (str[i])
	{
		if (ft_check_charset(str[i], charset) && str[i + 1] != '\0')
			if (!(ft_check_charset(str[i + 1], charset)))
				cnt++;
		i++;
	}
	return (cnt);
}

char			*ft_strdup_n(char *str, unsigned int n)
{
	unsigned int	i;
	char			*temp;

	temp = (char *)malloc(sizeof(char) * (n + 1));
	temp[n] = '\0';
	i = -1;
	while (++i < n)
	{
		temp[i] = str[i];
	}
	return (temp);
}

void			ft_put_str(char **strs, char *str, char *charset)
{
	int i;
	int j;
	int cnt;
	int size;

	i = -1;
	j = 1;
	cnt = 0;
	if (str[++i] != '\0' && !ft_check_charset(str[i], charset))
		j = 0;
	while (str[++i])
		if (ft_check_charset(str[i], charset))
		{
			size = i - j;
			if (size > 0)
			{
				strs[cnt] = ft_strdup_n(str + j, size);
				cnt++;
			}
			j = i + 1;
		}
	size = i - j;
	if (size > 0)
		strs[cnt] = ft_strdup_n(str + j, size);
}

char			**ft_split(char *str, char *charset)
{
	unsigned int	cnt;
	unsigned int	i;
	char			**strs;

	cnt = count_str(str, charset);
	strs = (char **)malloc(sizeof(char *) * (cnt + 1));
	if (!strs)
		return (0);
	if (!charset[0])
	{
		strs = (char **)malloc(sizeof(char *) * 2);
		i = 0;
		while (str[i] != '\0')
			i++;
		strs[0] = ft_strdup_n(str, i);
		strs[1] = 0;
		return (strs);
	}
	ft_put_str(strs, str, charset);
	strs[cnt] = 0;
	return (strs);
}
