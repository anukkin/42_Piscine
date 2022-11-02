/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abasterr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 18:35:03 by abasterr          #+#    #+#             */
/*   Updated: 2022/08/20 17:41:12 by abasterr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;

	if (*b != 0)
	{
		div = *a / *b;
		mod = *a % *b;
		*a = div;
		*b = mod;
	}
}
/*#include <stdio.h>

void ft_ultimate_div_mod(int *a, int *b);

int main ()
{
	int x;
	int y;
	int *ptr;
	int *ptr1;

	x = 30;
	y = 10;

	ptr = &x;
	ptr1 = &y;

	printf("%d %d\n", x, y);
	ft_ultimate_div_mod(ptr, ptr1);
	printf("%d %d\n", x, y);
}*/
