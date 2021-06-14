#include <unistd.h>

void	printcomb(char a, char b, char c, char d);
void	comb(char num1, char num2, char num3, char num4);

void	comb(char num1, char num2, char num3, char num4)
{
	while (num1 <= '9' && num2 <= '8')
	{
		while (num2 <= '9' && num3 <= '9' && num4 <= '9')
		{
			while (num3 <= '9' && num4 <= '9')
			{
				while (num4 <= '9')
				{
					printcomb(num1, num2, num3, num4);
					num4++;
				}
				num4 = '0';
				num3++;
			}
			num3 = num1;
			num2++;
			num4 = num2 + 1;
		}
		num1++;
		num2 = '0';
		num3 = '1';
		num4 = num2 + 1;
	}	
}

void	printcomb(char a, char b, char c, char d)
{
	if (a == '9' && b == '8' && c == '9' && d == '9')
	{
		write(1, &a, 1);
		write(1, &b, 1);
		write(1, " ", 1);
		write(1, &c, 1);
		write(1, &d, 1);
		write(1, ",", 1);
	}
	else
	{
		write(1, &a, 1);
		write(1, &b, 1);
		write(1, " ", 1);
		write(1, &c, 1);
		write(1, &d, 1);
		write(1, ",", 1);
		write(1, " ", 1);
	}
}

void	ft_print_comb2(void)
{
	char	num1;
	char	num2;
	char	num3;
	char	num4;

	num1 = '0';
	num2 = '0';
	num3 = '0';
	num4 = '1';
	comb(num1, num2, num3, num4);
}
