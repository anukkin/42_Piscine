/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abasterr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 11:10:33 by abasterr          #+#    #+#             */
/*   Updated: 2022/08/30 13:18:25 by abasterr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	int	i;
	int	result;

	result = 1;
	if (nb < 0)
		return (0);
	if (nb > 0)
	{
		i = ft_recursive_factorial(nb - 1);
		result = nb * i;
	}
	return (result);
}
/*
#include<stdio.h>
int main()
{
	int entero;
	int num;

	entero = 10;
	num=ft_recursive_factorial(entero);
	printf("%d\n", num);
}*/
