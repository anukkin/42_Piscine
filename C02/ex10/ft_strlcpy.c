/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abasterr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 12:47:23 by abasterr          #+#    #+#             */
/*   Updated: 2022/08/24 12:57:51 by abasterr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	c;

	i = 0;
	c = 0;
	if (size != 0)
	{
		while (src[i] != '\0' && i < size - 1)
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	while (src[c] != '\0')
		c++;
	return (c);
}
/*
#include<string.h>
#include<stdio.h>
int main()
{
	char a[20]="hola que tal estas";
	char b[20];
	unsigned int i;

	i=0;

	int n; 
		
	n = 12;

	//ft_strlcpy(b, a, n);

	printf("%lu\n", strlcpy(b, a, n));
	
	while (b[i] != '\0' )
	{
		printf("%c", b[i]);
		i++;
	}
	return (0);
}*/
