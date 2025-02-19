#include <stdio.h>

int search(int* arr, int n, int val)
{
	for (int i = 0; i < n; i++)
	{
		// return index is curr value is equal to val
		if (*(arr + i) == val) return i;
	}
	// return -1 if no match
	return -1;
}
int main()
{
	// arr holds a pointer to first element
	int arr[] = {1, 4, 6, 5, 2, 7, 10};
	printf("%i was returned\n", search(arr, 7, 6));
}
