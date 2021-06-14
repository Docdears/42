#include <unistd.h>

void print_reverse_alphabet()
{
	char l;
	l = 'z';
	while(l >= 'a')
	{
		write(1, &l, 1);
		l--;
	}
}