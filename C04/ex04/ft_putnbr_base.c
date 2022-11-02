/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abasterr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 16:21:24 by abasterr          #+#    #+#             */
/*   Updated: 2022/08/29 18:27:59 by abasterr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

int	input_check(char *str)
{
	int	i;
	int	j;
	int	len;

	len = ft_strlen(str);
	i = 0;
	j = 0;
	if (str[i] == '\0' || len == 1)
		return (0);
	while (str[i] != 0)
	{
		if (str[i] <= 0 || str[i] == 127 || str[i] == '-' || str[i] == '+')
			return (0);
		j = i + 1;
		while (j < len)
		{
			if (str[i] == str[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	len;
	int	error;

	len = ft_strlen(base);
	error = input_check(base);
	if (error == 1)
	{
		if (nbr < 0)
		{
			ft_putchar('-');
			nbr = nbr * (-1);
		}
		if (nbr < len)
		{
			ft_putchar(base[nbr]);
		}
		if (nbr >= len)
		{		
			ft_putnbr_base(nbr / len, base);
			ft_putnbr_base(nbr % len, base);
		}
	}
}

int main()
{
	char a[20] = "01";
	int n;

	n = 50;

	ft_putnbr_base(n, a); 
}
