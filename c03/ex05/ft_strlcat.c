/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junghkim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/11 16:02:58 by junghkim          #+#    #+#             */
/*   Updated: 2020/08/12 13:40:02 by junghkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned	int	ft_strlen(char *str)
{
	unsigned	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

unsigned	int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned	int	i;
	unsigned	int	j;
	unsigned	int	k;

	i = ft_strlen(dest);
	j = ft_strlen(src);
	k = -1;
	while (src[++k] != '\0' && size > i + k + 1)
	{
		dest[i + k] = src[k];
	}
	dest[i + k] = '\0';
	if (i > size)
		return (size + j);
	else
		return (i + j);
}
