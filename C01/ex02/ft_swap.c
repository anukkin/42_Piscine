/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abasterr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 17:23:09 by abasterr          #+#    #+#             */
/*   Updated: 2022/08/20 17:38:39 by abasterr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap( int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
/*#include <stdio.h>

void ft_swap(int *a, int *b);

int main  ()
{
int a;
int b;
int *ptr;
int *ptr1;

a = 10;
b = 2;

ptr = &a;
ptr1 = &b;

printf("%d %d\n", a, b);
ft_swap(ptr, ptr1);
printf("%d %d", a, b);
}*/
