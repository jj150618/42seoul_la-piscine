/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junghkim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/01 15:26:25 by junghkim          #+#    #+#             */
/*   Updated: 2020/08/01 17:35:03 by junghkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char a);

void	print_line(int column, int row, int x, int y)
{
	if (row == 0 || row == y - 1)
		if (column == 0)
			ft_putchar('A');
		else if (column == x - 1)
			ft_putchar('C');
		else
			ft_putchar('B');
	else
	{
		if (column == 0 || column == x - 1)
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
