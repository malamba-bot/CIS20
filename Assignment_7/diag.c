#define N 16
typedef int fix_matrix[N][N];
void fix_set_diag(fix_matrix A, int val)
{
	int i = 0;
	
	loop: // will always enter loop
		A[i][i] = A[i][i] + val;
		i++;
		if (i < N) goto loop;
}

int main()
{
}
