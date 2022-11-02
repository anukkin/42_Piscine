/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abasterr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 11:23:53 by abasterr          #+#    #+#             */
/*   Updated: 2022/08/23 13:13:18 by abasterr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	i;
	int	n;

	n = 1;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 'a' || str [i] > 'z')
			n = 0;
		i++;
	}
	return (n);
}
/*
#include <stdio.h>

int main ()
{
	char	a[]="abcde12s";

	printf("%d", ft_str_is_lowercase(a));
	return 0;
}*/
