/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abasterr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 17:38:38 by abasterr          #+#    #+#             */
/*   Updated: 2022/08/25 17:38:51 by abasterr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (n == 0)
		return (0);
	while (s1[i] != '\0' && s2[i] != '\0' && i < n - 1)
	{
		if (s1[i] != s2[i])
			break ;
		i++;
	}
	return (s1[i] - s2[i]);
}
/*
#include <stdio.h>
#include <string.h>
int main()
{
	char a[]="Hol a quecaaaa";
	char b[]="iHolib que";
	unsigned int c;
	//ft_strcmp(ptr, ptr1);

	c = 20;
//	printf("%d", ft_strncmp(a, b, c));
	printf("%d", strncmp(a, b, c));
	return (0);
}*/
