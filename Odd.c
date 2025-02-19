#include <stdio.h>

void oddFirst(int* arr, int n)
{
	int nextAvailable = 0;
	for (int i = 0; i < n; i++)
	{
		// if odd, move to next available index at front
		if (*(arr + i) % 2 != 0)
		{
			// swap with item in next available index
			int holder = *(arr + nextAvailable);
			*(arr + nextAvailable) = *(arr + i);
			*(arr + i) = holder;
			++nextAvailable;
		}
	}
}
int main()
{
	int arr[] = {10, 7, 2, 5, 6, 4, 1};
	oddFirst(arr, 7);
	// print list
	for (int i = 0; i < 7; i++)
	{
		printf("%i ", arr[i]);
	}
	printf("\n");
}
