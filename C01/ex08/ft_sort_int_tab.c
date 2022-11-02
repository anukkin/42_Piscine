/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abasterr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 13:56:28 by abasterr          #+#    #+#             */
/*   Updated: 2022/08/20 17:55:47 by abasterr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	camb;

	i = 0;
	while (i < size)
	{
		if (tab[i] > tab [i + 1])
		{
			camb = tab[i];
			tab[i] = tab[i + 1];
			tab[i + 1] = camb;
			i = 0;
		}
		else
			i++;
	}
}

/*
#include <stdio.h>
int main ()
{
int size;
	int c[6]={1,10,3,7,5,6};
	int *ptr;
	int i;
	
	size  = 6;

	ptr=c;
	ft_sort_int_tab(ptr,size);
	i=0;
	while(i<size)
	{
		printf("%d ", c[i]);
		i++;
	}

}
*/
