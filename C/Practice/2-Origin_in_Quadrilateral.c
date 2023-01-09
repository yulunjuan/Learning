# include <stdio.h>
# include <stdbool.h>
int main()
{
	int a,b,c,d,e,f,g,h;
	scanf("%d%d%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f,&g,&h);
	bool i;
	if ( (a*d-b*c > 0) && (c*f-d*e >0) && (e*h-f*g > 0) && (g*b-a*h >0)){
		i = true; 
	} else { i = false;
	}
	printf("%d\n",i);
	
}