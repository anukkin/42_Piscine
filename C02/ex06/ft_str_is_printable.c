/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abasterr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 11:40:39 by abasterr          #+#    #+#             */
/*   Updated: 2022/08/23 13:24:34 by abasterr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	i;
	int	n;

	n = 1;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 32 || str [i] > 126)
			n = 0;
		i++;
	}
	return (n);
}
/*
#include <stdio.h>

int main ()
{
	char	a[]="";

	printf("%d", ft_str_is_printable(a));
	return 0;
}*/
