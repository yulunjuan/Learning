# include <stdio.h>
# include <assert.h>

int main()
{
	int n,i;
	int sum = 1;
	scanf("%d\n%", &n, &i );
	//assert ( i>1 && i<5 );
	for ( int a = 1; a <= i; a++ ){
		sum = sum*n;
	}
	printf("%d\n", sum);
}


