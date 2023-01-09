#include <stdio.h>

int main(void)
{
	int M;
	scanf("%d", &M);
	for (int i = 6; i > 0; i--){
		M /= 10;
		printf("%d ", M);
	}
	
	
	return 0;
}