/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abasterr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 10:01:56 by abasterr          #+#    #+#             */
/*   Updated: 2022/08/23 13:35:29 by abasterr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	i;
	int	n;

	n = 1;
	if (str[0] == '\0')
		return (n);
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 'A' || (str[i] > 'Z' && str[i] < 'a') || str [i] > 'z')
			n = 0;
		i++;
	}
	return (n);
}
/*#include <stdio.h>
int main()
{
	char	a[20]="hola\n";
	
	printf("%d",ft_str_is_alpha(a));
	return 0;
}*/
