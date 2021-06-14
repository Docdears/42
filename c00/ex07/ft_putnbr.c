#include <unistd.h>

void ft_putnbr(int nb);

void ft_putnbr(int nb)
{
	int c;
	int aux;
	char str[12];

	c = 0;
	/*if(nb > 9)
	{*/
		aux = nb;
		while(aux > 9)
		{
			aux = aux / 10;
			c++;
		}
		str[c + 1] = '\0';
		while(c >= 0)
		{
			str[c] = nb % 10 + '0';
			nb = nb / 10;
			c--;

		}
		c = 0;
		while(str[c] != '\0')
		{
			write(1, &str[c], 1);
			c++;
		}	
		write(1, "\n", 1);
	/*}*/
}

int main()
{
	ft_putnbr(999);
	return(0);
}