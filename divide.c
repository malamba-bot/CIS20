#include <stdio.h>

unsigned int rotate_left(unsigned x, int n);

int main()
{
	unsigned int x = 0x12345678;
	printf("rotate_left: %x to %x\n", x, rotate_left(x, 8));	
}

unsigned int rotate_left(unsigned x, int n)
{
	int w = sizeof(int) << 3; // value of w given in assignment
	unsigned int y = x >> (w - n);
	x = x << n;
	return x | y;
}
