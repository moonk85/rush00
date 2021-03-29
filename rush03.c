/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minjpark <minjpark@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/28 17:58:36 by minjpark          #+#    #+#             */
/*   Updated: 2021/03/28 20:58:32 by minjpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	print_at(int line, int column, int max_l, int max_c)
{
	if (line == 0)
	{
		if (column == 0)
			ft_putchar('A');
		else if (column == max_c)
			ft_putchar('C');
		else
			ft_putchar('B');
	}
	else if (line == max_l)
	{
		if (column == 0)
			ft_putchar('A');
		else if (column == max_c)
			ft_putchar('C');
		else
			ft_putchar('B');
	}
	else
	{
		if (column == 0 || column == max_c)
			ft_putchar('B');
		else
			ft_putchar(' ');
	}
}

void	rush(int x, int y)
{
	int	line;
	int	column;

	line = 0;
	while (line < y)
	{
		column = 0;
		while (column < x)
		{
			print_at(line, column, y - 1, x - 1);
			column++;
		}
		if (x > 0)
		{
			ft_putchar('\n');
		}
		line++;
	}
}
