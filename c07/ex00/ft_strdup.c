/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junghkim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/16 02:57:26 by junghkim          #+#    #+#             */
/*   Updated: 2020/08/18 22:02:24 by junghkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*temp;
	int		i;

	i = 0;
	while (src[i] != '\0')
		i++;
	temp = (char *)malloc(sizeof(char) * (i + 1));
	if (temp == 0)
		return (0);
	if (temp != 0)
	{
		i = 0;
		while (src[i] != '\0')
		{
			temp[i] = src[i];
			i++;
		}
		temp[i] = '\0';
	}
	return (temp);
}
