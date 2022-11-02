/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abasterr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 12:22:14 by abasterr          #+#    #+#             */
/*   Updated: 2022/08/20 17:53:49 by abasterr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	n;

	n = 0;
	while (str[n] != '\0')
	{
		n++;
	}
	return (n);
}
/*#include <stdio.h>
int ft_strlen(char *str);

int main()
{
	char c[]="Hola prueba";
	char *ptr;
	int a;

	ptr = c;
	a = ft_strlen(ptr);
	printf("%d\n",a);

}*/
