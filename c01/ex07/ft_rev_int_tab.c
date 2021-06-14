#include <stdio.h>
void ft_rev_int_tab(int *tab, int size)
{
	int i;
	int aux;
	int trsize;

	trsize = size;
	i = 0;
	while(i != trsize/2)
	{
		aux = tab[size - 1];
		tab[size - 1] = tab[i];
		tab[i] = aux;
		i++;
		size--;
	}

}
/*int main()
{
	int i = 0;
	int a[] = {1, 2, 3, 4, 5};
	int size = 5;
	ft_rev_int_tab(a, size);
	while(i < size)
	{
		printf("%d", a[i]);
		i++;
	}
	printf("\n");
	return(0);
} */