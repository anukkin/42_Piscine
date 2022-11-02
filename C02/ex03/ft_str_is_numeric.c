/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abasterr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 11:10:53 by abasterr          #+#    #+#             */
/*   Updated: 2022/08/23 13:07:53 by abasterr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	i;
	int	n;

	i = 0;
	n = 1;
	while (str[i] != '\0')
	{
		if (str [i] < '0' || str [i] > '9')
			n = 0;
		i++;
	}
	return (n);
}
/*#include <stdio.h>

int main()
{
	char a[]="-1";

	printf("%d", ft_str_is_numeric(a));
	return 0;
}*/
