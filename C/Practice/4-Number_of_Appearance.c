#include <stdio.h>
#include <assert.h>
#include <math.h>

int main(void)
{
	int N,M;
	int Nsize = 2;
	int Msize = 7;
	scanf("%d%d", &N, &M);
	assert(N >= 10 && N <= 99);
	assert(M >= 1000000 && M <= 9999999);
	int a[Nsize],b[Msize];
	a[0] = N/10; a[1] = N%10;
	b[0] = M/1000000;
	for (int i = Msize-1; i > 0; i--){
		b[i] = M%10;
		M /= 10;
		//printf("%d ", M);
	}
	//printf("%d%d\n", a[0],a[1]);
	//for (int i = 0; i < Msize; i++)
		//printf("%d ", b[i]);
	int count = 0;
	for (int j = 0; j < Msize-1; j++)
		if(a[0] == b[j] && a[1] == b[j+1])
			count++;
	printf("%d\n", count);
		
	return 0;
}
