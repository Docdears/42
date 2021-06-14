
#include <stdio.h>
void ft_sort_int_tab(int *tab, int size);

void ft_sort_int_tab(int *tab, int size)
{
	int i;
	int aux;

	i = 0;
	while(size > 0)
	{
		while(tab[size - 1] > tab[i])
		{
			i++;
		}
		if(tab[size - 1] < tab[i])
		{
			aux = tab[size - 1];
			tab[size - 1] = tab[i];
			tab[i] = aux;
		}
		else if(size - 1 == i || size - 1 > i)
		{
			size--;
		}
		i = 0;

	}
}

int main()
{
	int a[] = {3, 5, 3, 2, 1, 4};
	int size = 6;
	int i = 0;

	ft_sort_int_tab(a, size);
	while(i < size)
	{
		printf("%d", a[i]);
		i++;
	}
	return(0);
}