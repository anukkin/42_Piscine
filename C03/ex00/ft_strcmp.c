/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abasterr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 17:38:38 by abasterr          #+#    #+#             */
/*   Updated: 2022/08/25 17:38:20 by abasterr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
			break ;
		i++;
	}
	return (s1[i] - s2[i]);
}
/*
#include<stdio.h>
#include<string.h>
int main()
{
	char a[]="Hola que tal estas?a     ";
	char b[]="Hola que tal estas?a";

	printf("%d", ft_strcmp(a, b));
	//printf("%d", strcmp(a, b));
	return (0);
}*/
