/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abasterr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 12:54:57 by abasterr          #+#    #+#             */
/*   Updated: 2022/08/20 17:54:30 by abasterr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	tmp;

	i = 0;
	j = size;
	while (i != j)
	{
		tmp = tab[i];
		tab[i] = tab[j - 1];
		tab[j - 1] = tmp;
		j--;
		i++;
	}
}

/*int main()
{
	int size;
	int c[6]={1,2,3,4,5,6};
	int *ptr;
	int i;
	
	size  = 6;

	ptr=c;
	ft_rev_int_tab(ptr,size);
	i=0;
	while(i<size)
	{
		printf("%d ", c[i]);
		i++;
	}
}*/
