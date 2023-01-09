#include <stdio.h>
#include <assert.h>

int main(void)
{
	int n;
	scanf("%d",&n);
	assert(n > 0);
	for (int i = 1; i < n; i++)
		printf("%d\n", i);
	for (int i = n; i > 0; i--)
		printf("%d\n", i);
	
	return 0;
}
