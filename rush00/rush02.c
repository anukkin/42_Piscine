/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abasterr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/13 18:11:50 by abasterr          #+#    #+#             */
/*   Updated: 2022/08/14 11:22:47 by abasterr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_putchar(char c);

void	rush02(int x, int y)
{
	int	f;
	int	c;

	f = 1;
	while ((f <= y) && (x != 0))
	{
		c = 1;
		while (c <= x)
		{
			if ((f == 1 && c == 1) || (f == 1 && c == x))
				ft_putchar(65);
			else if ((f > 1 && c > 1) && (f < y && c < x))
				ft_putchar(' ');
			else if ((f == y && c == 1) || (f == y && c == x))
				ft_putchar(67);
			else
				ft_putchar(66);
			c++;
		}
		ft_putchar('\n');
	f++;
	}
}
