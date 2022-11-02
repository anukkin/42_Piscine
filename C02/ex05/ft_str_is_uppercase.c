/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abasterr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 11:32:03 by abasterr          #+#    #+#             */
/*   Updated: 2022/08/23 13:16:29 by abasterr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	i;
	int	n;

	n = 1;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 'A' || str [i] > 'Z')
			n = 0;
		i++;
	}
	return (n);
}
/*
#include <stdio.h>

int main ()
{
	char	a[]="Z";

	printf("%d", ft_str_is_uppercase(a));
	return 0;
}
*/
