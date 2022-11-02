/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abasterr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 12:57:11 by abasterr          #+#    #+#             */
/*   Updated: 2022/08/31 10:39:23 by abasterr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	result;

	result = nb;
	if (power == 0)
		return (1);
	if (power < 0)
		return (0);
	while (power > 1)
	{
		result *= nb;
		power--;
	}
	return (result);
}
/*
#include<stdio.h>
int main()
{
	int entero;
	int num;
	int pot;

	entero = 4;
	pot=4;
	num=ft_iterative_power(entero,pot);
	printf("%d\n", num);
}*/
