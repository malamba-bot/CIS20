/*int mul(int a, int b)
{
	int r = 0;
	if (a >= b)
		for (int i = 0; i < b; i++)
			r += a;

	else
		for (int i = 0; i < a; i++)
			r += b;
	return r;	
}*/

int mul(int a, int b)
{
	int r = 0;
	int i = 0;
	if (a == 0 || b == 0) goto end;
	if (a >= b) goto case1;
	case2:
		r += b;
		i++;
		if (i < a) goto case2;
		goto end;

	case1:
		r += a;
		i++;
		if (i < b) goto case1;
	end:
		return r;
}
	

int main()
{
	return mul(4, 5);
}
