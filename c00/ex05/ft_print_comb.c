#include <unistd.h>

void printnb(int a, int b, int c);

void printnb(int a, int b, int c)
{
	char sp;
	char cm;
	cm = ',';
	sp = ' ';
	if(a == '7' && b == '8' && c == '9')
	{
		write(1, &a, 1);
		write(1, &b, 1);
		write(1, &c, 1);
	}
	else
	{
		write(1, &a, 1);
		write(1, &b, 1);
		write(1, &c, 1);
		write(1, &cm, 1);
		write(1, &sp, 1);
	}
}

void ft_print_comb()
{
	char a;
	char b;
	char c;
	a = '0';
	b = a + 1;
	c = b + 1;
	while(a <= '7')
	{
		while(b <= '8')
		{
			while(c <= '9')
			{
				printnb(a, b, c);
				c++;
			}
			b++;
			c = b + 1;
		}
		a++;
		b = a + 1;
		c = b + 1;
	}
}