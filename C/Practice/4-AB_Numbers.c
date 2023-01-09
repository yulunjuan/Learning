#include <stdio.h>
#include <assert.h>
#define ArraySize 4
int main(void)
{
	int A,B,a,b,c,d,e,f,g,h;
	scanf("%d%d", &A, &B);
	a = A/1000; b = A/100%10; c = A/10%10; d = A%10;
	e = B/1000; f = B/100%10; g = B/10%10; h = B%10;
	int C[ArraySize] = {a,b,c,d};
	int D[ArraySize] = {e,f,g,h};
	int n = 0;	int m = 0;
	for(int i = 0; i < ArraySize; i++)
	{
		for(int j = 0; j < ArraySize; j++)
		{
			if (i == j && C[i] == D[j])
				n++;
			else if (i != j && C[i] == D[j])
				m++;
		}
	}	
	printf("%dA%dB", n, m);
	
	return 0;
}
