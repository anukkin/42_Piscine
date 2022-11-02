/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abasterr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 13:09:53 by abasterr          #+#    #+#             */
/*   Updated: 2022/08/31 10:50:55 by abasterr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	int	result;
	int	i;

	result = nb;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	if (power > 1)
	{
		i = ft_recursive_power(nb, (power - 1));
		result = i * nb;
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

	entero = 2;
	pot = 4;
	num = ft_recursive_power(entero,pot);
	printf("%d\n", num);
}*/
