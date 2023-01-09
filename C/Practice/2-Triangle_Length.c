# include <stdio.h>
# include <stdbool.h>
int main()
{
	int a,b,c;
	scanf("%d\n%d\n%d",&a,&b,&c);
	bool i;
	if ( (a+b > c) && (a+c >b) && (b+c > a) ){
		i = true; 
	} else { i = false;
	}
	printf("%d\n",i);
	
}