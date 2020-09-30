/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junghkim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/17 21:30:00 by junghkim          #+#    #+#             */
/*   Updated: 2020/08/19 11:20:11 by junghkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

  
#include <stdio.h>
#include <stdlib.h>

char **ft_split(char *str, char *charset);

int main(void)
{
	char str[50] = "1sTXvTrmsDjetyKzGpQuzS5cjreH8R60q3fxgNLpAUOt7e";
	char charset[40] = "15UYVG";
	char **strs = ft_split(str, charset);
	for(int i = 0; strs[i]; i++)
		printf("%s\n", strs[i]);
	return 0;
}
