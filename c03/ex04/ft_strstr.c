/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junghkim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/10 14:38:13 by junghkim          #+#    #+#             */
/*   Updated: 2020/08/11 15:58:16 by junghkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strstr(char *str, char *to_find)
{
	int i;
	int j;
	int l;

	i = 0;
	l = ft_strlen(str) - ft_strlen(to_find);
	if (to_find[0] == '\0')
		return (str);
	if (l >= 0)
		while (str[i] != '\0')
		{
			j = 0;
			if (str[i] == to_find[j])
				while (str[i + j] == to_find[j])
				{
					if (to_find[j + 1] == '\0')
						return (&str[i]);
					j++;
				}
			i++;
		}
	return (0);
}
