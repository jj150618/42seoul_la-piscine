/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junghkim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/01 15:26:25 by junghkim          #+#    #+#             */
/*   Updated: 2020/08/01 17:35:23 by junghkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char a);

void	print_line(int column, int row, int x, int y)
{
	if (column == 0 || column == x - 1)
		if (column + row == 0 || column + row == x + y - 2)
			ft_putchar('A');
		else if (row > 0 && row < y - 1)
			ft_putchar('B');
		else
			ft_putchar('C');
	else
	{
		if (row == 0 || row == y - 1)
			ft_putchar('B');
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
			print_line(column, row, x, y);
			column++;
		}
		row++;
		ft_putchar('\n');
	}
}
