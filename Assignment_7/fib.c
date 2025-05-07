int fib(int n)
{
	int f = 1;
	int l = 0;
	for (int i = 0; i < (n - 1); i++)
	{
		int t = f;
		f = f + l;
		l = t;
	}
	return l;
}

int main()
{
	return fib(8);
}
