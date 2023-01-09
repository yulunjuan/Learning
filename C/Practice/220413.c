#include <stdio.h>
int main()
{
	int n=10;
	int i=0;
	int sum = 0;
	//scanf("%d", &n);
	while (i<=n){
		i++;
		sum += i;
	}
	printf("%d\n", sum);	
}
