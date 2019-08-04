#include <stdio.h>
#include <stdlib.h>

int* s_and(int* in, int n);

int main()
{
	int a[] = {1, 1};
	int* b;
	
	int* (*fptr)(int*, int);
	
	fptr = &s_and;
	
	b = (*fptr)(a, 2);
	
	printf("%d\n", b[0]);

	return 0;
}

int* s_and(int* in, int n)
{
	int* out;
	
	out = (int*) malloc(1 * sizeof (int));
	
	if(in[0] == in[1])
		out[0] = 1;
	else
		out[0] = 0;
	return out;
}

