/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush-02.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abasterr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/27 18:40:07 by abasterr          #+#    #+#             */
/*   Updated: 2022/08/28 12:10:48 by abasterr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	f_num(char *str)
{
	int	i;
	int	num;

	i = 0;
	num = 0;
	while (str[i] >= '0' && str[i] <= '9')
	{
		num = (str[i] - '0') + (num * 10);
		i++;
	}
	return (num);
}

int	f_data_check(char *str)
{
	int	i;
	int	num;
	int	check;

	i = 0;
	num = 0;
	check = 1;
	while (str[i] != '\0')
	{
		if (str[i] < '0' || str[i] > '9')
		{
			check = 0;
			break ;
		}
		i++;
	}
	i = 0;
	if (check == 1)
		num = f_num(str);
	else
		num = -1;
	return (num);
}

int	main(int argc, char**argv)
{
	int	n;
	int	i;

	i = 0;
	n = -1;
	if (argc < 2 || argc > 3)
		write(1, "\n", 1);
	else
	{
		n = f_data_check (argv[1]);
		if (n < 0)
			write(1, "Error", 5);
		else
			write(1, "OK", 2);
		write(1, "\n", 1);
	}
}
