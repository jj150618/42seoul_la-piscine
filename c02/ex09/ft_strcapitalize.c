/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junghkim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/06 21:46:09 by junghkim          #+#    #+#             */
/*   Updated: 2020/08/10 15:57:30 by junghkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_checkstr(char str)
{
	if (str >= '0' && str <= '9')
		return (1);
	if (str >= 'A' && str <= 'Z')
		return (1);
	if (str >= 'a' && str <= 'z')
		return (1);
	return (0);
}

char	*ft_strlowcase(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int i;
	int j;

	ft_strlowcase(str);
	if (str[0] >= 'a' && str[0] <= 'z')
		str[0] -= 32;
	i = 0;
	while (str[++i] != '\0')
	{
		j = i - 1;
		if (!ft_checkstr(str[j]))
			if (str[i] >= 'a' && str[i] <= 'z')
				str[i] -= 32;
	}
	return (str);
}
