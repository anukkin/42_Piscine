/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abasterr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 11:45:38 by abasterr          #+#    #+#             */
/*   Updated: 2022/08/20 17:46:59 by abasterr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{	
	while (*str != '\0')
	{
		write(1, str, 1);
		str++;
	}
}
/*#include <stdio.h>

void ft_putstr(char *str);

int main ()
{
	char c[]="hola";
	char *ptr;

	ptr=c;

	ft_putstr(ptr);
	return (0);

}*/
