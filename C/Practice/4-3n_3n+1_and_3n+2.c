#include <stdio.h>
#include <assert.h>

int main(void)
{
	int n,m;
	int i = 0;
	int j = 0;
	int k = 0;
	while(scanf("%d",&n)!= EOF){
		assert(n > 0);
		m = n % 3;
		switch(m){
		case 0: 
			i++;
			break;
		case 1:
			j++;
			break;
		case 2:
			k++;
			break;
		}
	}	
	
	printf("%d %d %d", i, j, k);
	
	return 0;
}
