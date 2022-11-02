/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abasterr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 10:19:59 by abasterr          #+#    #+#             */
/*   Updated: 2022/08/27 16:02:32 by abasterr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	i;
	int	num;
	int	sign;

	num = 0;
	i = 0;
	sign = 1;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	while ((str[i] == 43 || str[i] == 45))
	{
		if (str[i] == '-')
			sign = sign * (-1);
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{	
		num = (str[i] - '0') + (num * 10);
		i++;
	}	
	return (sign * num);
}
/*
#include <stdio.h>
#include <unistd.h>

int main(int argc, char *argv[])
{

	int n;
	
	n = 0;

	if (argc != 2)
		write(1, "\n", 1);
	else
		n=ft_atoi(argv[1]);

	printf("número: %d", n);
	return (0);
}*/
