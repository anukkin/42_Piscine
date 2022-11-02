/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abasterr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 12:15:08 by abasterr          #+#    #+#             */
/*   Updated: 2022/08/24 09:58:23 by abasterr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] + 32;
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	ft_strlowcase(str);
	i = 1;
	if (str[0] >= 'a' && str[0] <= 'z')
		str[0] = str[0] - 32;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{	
			if (str[i - 1] < '0')
				str[i] = str[i] - 32;
			else if (str[i - 1] > '9' && str[i - 1] < 'A')
				str[i] = str[i] - 32;
			else if (str[i - 1] > 'Z' && str[i - 1] < 'a')
				str[i] = str[i] - 32;
			else if (str[i - 1] > 'z')
				str[i] = str[i] - 32;
		}
		i++;
	}
	return (str);
}
/*
#include <stdio.h>

int main()
{
	char a[]="salut, comMent tu vAs ? 42MOts quarante-deux; cinquante+et+un";

	printf("%s",ft_strcapitalize(a));
}*/
