#include <stdio.h>
#include <assert.h>

int main(void)
{
	int n;
	scanf("%d",&n);
	assert(n > 0);
	for (int i = 1; i <= n; i++)
		for (int j = 1; j <= i; j++)
		printf("%d\n", j);
	
	return 0;
}
