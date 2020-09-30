/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junghkim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/01 15:26:25 by junghkim          #+#    #+#             */
/*   Updated: 2020/08/01 18:48:22 by junghkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char a);

void	print_char(int column, int row, int x, int y)
{
	if (column == 0 || column == x - 1)
		if (row == 0 || row == y - 1)
			ft_putchar('o');
		else
			ft_putchar('|');
	else
	{
		if (row == 0 || row == y - 1)
			ft_putchar('-');
		else
			ft_putchar(' ');
	}
}

void	rush(int x, int y)
{
	int column;
	int row;

	row = 0;
	while (row < y)
	{
		column = 0;
		while (column < x)
		{
			print_char(column, row, x, y);
			column++;
		}
		row++;
		ft_putchar('\n');
	}
}
