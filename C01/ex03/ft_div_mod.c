/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abasterr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 17:35:51 by abasterr          #+#    #+#             */
/*   Updated: 2022/08/20 17:40:08 by abasterr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	if (b != 0)
	{
		*div = a / b;
		*mod = a % b;
	}
}
/*#include <stdio.h>

void ft_div_mod(int a, int b, int *div, int *mod);

int main ()
{
	int a;
	int b;
	int *ptr;
	int *ptr1;

	a = 20;
	b = 10;
	ptr=&a;
	ptr1=&b;

	printf("%d %d\n", a, b);
	ft_div_mod(a,b,ptr,ptr1);
	printf("%d %d", a, b);
}*/
