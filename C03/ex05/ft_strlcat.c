/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abasterr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 16:03:49 by abasterr          #+#    #+#             */
/*   Updated: 2022/08/25 17:24:50 by abasterr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	len_src;
	unsigned int	len_dest;

	len_src = 0;
	len_dest = 0;
	j = 0;
	while (dest[len_dest] != '\0')
		len_dest++;
	while (src[len_src] != '\0')
		len_src++;
	if (size == 0 || size <= len_dest)
		return (len_src + size);
	i = len_dest;
	while (src[j] != '\0' && j < size - len_dest - 1)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (len_dest + len_src);
}
/*
#include <string.h>
#include <stdio.h>
#include <unistd.h>
int main()
{
	char des[20]= "aqui ";
	char ori[20]= "acaba";
	unsigned int s;
	unsigned int i;

	i = 0;

	s = 4;
	
	printf("%u\n", ft_strlcat(des, ori, s));
//	printf("\n");
//	printf("%s", des);
	while(i<s) 
	{
	write(1, &des[i], 1);
	i++;
	}
}*/
