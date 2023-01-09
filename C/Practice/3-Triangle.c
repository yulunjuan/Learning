# include <stdio.h>

int main()
{
	int x;
	scanf("%d",&x);
	int i = ( x > 0 )? 0 : -100;
	if( x%3 == 0 ){
		i += 3 ;
		if ( x%5 == 0 ){
			i +=5 ;
		} 
	} else if ( x%5 == 0 ) {
		i += 5 ;
	} 
	i = ( 100 <= x && x <= 200 )? i+50 : i-50;
	printf("%d\n",i);
	
}


