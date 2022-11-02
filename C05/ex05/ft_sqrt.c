/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abasterr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 16:59:22 by abasterr          #+#    #+#             */
/*   Updated: 2022/08/31 11:05:20 by abasterr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	long	i;
	long	num;

	num = nb;
	if (num <= 0)
		return (0);
	if (num == 1)
		return (1);
	i = 2;
	if (num >= 2)
	{
		while (i * i <= num)
		{
			if (i * i == num)
				return (i);
			i++;
		}
	}
	return (0);
}
/*
#include<stdio.h>
int main()
{
	printf("%d", ft_sqrt(20));
}*/
