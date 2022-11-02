
#include <stdio.h>
#include <unistd.h>

int	*f_parametros (char *str, int *ptr, int *ptr2)
{
	int i;
	int j;

	i =	0;

	while (str[i] != '\0')
		i++;
	if (i != 30)
		return (0);

	if (str[0] != '1' || str[0] != '2' || str[0] != '3' || str[0] != '4')
		return (0);
	
	i = 0;
	j=0;
	while (i <= 14 && str[i + 1] == ' ' && str[i] > '0' && str[i] < '5')
	{	
		ptr[j] = str[i] - '0';
		i = i + 2;
		j++;
	}

	j= 0;
	while ( i>=16 && str[i + 1] == ' ' && str[i] > '0' && str[i] < '5')
	{
		ptr2[j] = str[i] - '0';
		i = i + 2;
		j++;
	}

	return (0);

}


int main (int argc, char **argv)
{
	
	int a[7];
	int b[7];
	int i;
	int j;
	int *ptr;
	int *ptr1;
	
	ptr = a;
	ptr1 = b;

	j =	0;
	i = 0;
	

	if (argc != 2)
		write(1, "/n", 1);
	else 
		f_parametros(argv[1], ptr, ptr1);

	while( i<8)
	{
	printf("%d ", a[i]);
	i++;
	}

	while (j<8)
	{	
    printf("%d ", b[j]);
    j++;
    }	
}
