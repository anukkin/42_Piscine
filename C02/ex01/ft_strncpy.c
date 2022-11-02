/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abasterr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 09:48:25 by abasterr          #+#    #+#             */
/*   Updated: 2022/08/24 09:57:25 by abasterr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src [i];
		i++;
	}
	while (i < n)
	{	
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
/*
#include <stdio.h>
#include <string.h>
#include <unistd.h>
int main ()
{
	char a[20]="Hola que tal";
	char b[20];
	unsigned int n;
	unsigned int i;

	i = 0;

	n = 17;
	strncpy(b, a, n);
	//printf("%s\n", b);
	//printf("\n%s", ft_strncpy(b, a, n));
	while(i<n)
	{
		write(1, &b[i], 1);
		i++;
	}	
	return (0);
}*/
