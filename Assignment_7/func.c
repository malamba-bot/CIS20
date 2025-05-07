long func(int x)
{
	long result = 0;
	int p = 0;
	int q = 0;
	if (x == 1) goto case1;
	else if (x == 2) goto case2;
	else if (x == 3) goto case4; // falls through to case four
	else if (x == 4) goto case4;
	else if (x == 5) goto case5;
	else if (x == 7) goto case7;
	else goto default_case;

	case1:
		p = 1;
		q = 10;
		goto end;
	
	case2:
		p = 2;
		q = 20;
		goto end;
	
	case4:
		p = 3;
		q = 30;
		goto end;
	
	case5:
		p = 4;
		q = 40;
		goto end;

	case7:
		p = 5;
		q = 50;
		goto end;

	default_case: //default_case will naturally flow down to the end
		p = 5;
		q = 60;
	
	end:
		result = p * q;
		return result;
}

int main()
{
	return func(4);
}
