#include <unistd.h>

void ft_print_alphabet(void)
{
	int n;
	char l;
	l = 'a';
	n = 1;
	while(n <= 26)
	{
		write(1, &l, 1);
		n++;
		l++;
	}
}