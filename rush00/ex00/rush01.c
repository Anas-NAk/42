/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anakash, amajdi, malruwai <anakash@42.fr>                    +#+  +:+          */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/19 10:49:13 by anakash          #+#    #+#             */
/*   Updated: 2025/04/19 17:22:44 by malruwai           ###   ########.fr       */
/*   Updated: 2025/04/20 15:30:34 by amajdi                                                                         */
/* ************************************************************************** */
void	ft_putchar(char c);
void	middle_pattern(int col);
void	upper_pattern(int column);
void	lower_pattern(int x);

void	rush(int x, int y)
{
	if (x <= 0 || y <= 0)
		return ;
	upper_pattern(x);
	y--;
	if (y == 0)
		return ;
	while (y > 1)
	{
		middle_pattern(x);
		y--;
	}
	if (y == 1)
		lower_pattern(x);
}

void	middle_pattern(int col)
{
	int	x;

	x = 1;
	while (col >= x)
	{
		if (x == 1)
			ft_putchar('*');
		else if (x != col)
			ft_putchar(' ');
		else
			ft_putchar('*');
		x++;
	}
	ft_putchar('\n');
}

void	upper_pattern(int column)
{
	ft_putchar('/');
	--column;
	while (column > 1)
	{
		ft_putchar('*');
		--column;
	}
	if (column == 1)
	{
		ft_putchar('\\');
	}
	ft_putchar('\n');
}

void	lower_pattern(int x)
{
	int	col;

	col = 1;
	while (col <= x)
	{
		if (col == 1)
			ft_putchar('\\');
		else if (col == x)
			ft_putchar('/');
		else
			ft_putchar('*');
		col++;
	}
	ft_putchar('\n');
}
