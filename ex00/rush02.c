void	ft_putchar(char c);

void	put_line (char begin, char fill, char end, int x)
{
	int	i;

	i = 0;
	while (i < x)
	{
		if (i == 0)
		{
			ft_putchar(begin);
		}
		else if (i == x - 1)
		{
			ft_putchar(end);
		}
		else
		{
			ft_putchar(fill);
		}
		i++;
	}
	ft_putchar ('\n');
}

void	rush(int x, int y)
{
	int	i;

	i = 0;
	while (i < y)
	{
		if (i == 0)
		{
			put_line('A', 'B', 'A', x);
		}
		else if (i == y - 1)
		{
			put_line('C', 'B', 'C', x);
		}
		else
		{
			put_line('B', ' ', 'B', x);
		}
		i++;
	}
}
