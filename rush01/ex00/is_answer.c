/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_answer.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junghkim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/09 14:36:28 by junghkim          #+#    #+#             */
/*   Updated: 2020/08/09 17:53:04 by junghkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		check_col(int i);
int		check_row(int i);

int		is_answer(void)
{
	int i;
	int check;

	i = 0;
	check = 0;
	while (++i < 5)
		if (!(check_col(i)))
			return (0);
	while (--i > 0)
		if (!(check_row(i)))
			return (0);
	return (1);
}
