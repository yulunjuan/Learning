# include <stdio.h>
# include <stdbool.h>
int main()
{
	int x;
	bool i;
	scanf("%d",&x);
	if ( x % 3 == 0 && x % 5 == 0 && x % 7 != 0) {
		i = false;
		printf("%d\n",i);
	} else { 
		i = true;
		printf("%d\n",i);
	}
}