void ft_ultimate_div_mod(int *a, int *b)
{
	int a_result;

	a_result = *a
	*a = *a / *b;
	*b = a_result % *b;
}