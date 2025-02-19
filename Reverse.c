#include <stdio.h>
void reverse(int *arr, int n)
{
	for (int i = 0; i < (n / 2); i++)
	{
		// switch elements from front and back while incrementally moving in
		int holder = *(arr + i);
		*(arr + i) = *(arr + n - 1 - i);
		*(arr + n - 1 - i) = holder;
	}
}
int main()
{
	int arr[] = {10, 7, 2, 5, 6, 4, 1};
	reverse(arr, 7);
	// print list
	for (int i = 0; i < 7; i++)
	{
		printf("%i ", arr[i]);
	}
	printf("\n");
}
