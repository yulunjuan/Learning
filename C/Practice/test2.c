#include<stdio.h>

void func(void);

int count = 5;

int main(){
	while( count-- ){
		func();
	}
	return 0;
}

void func(void){
	int i = 5;
	i++;
	printf("i is %d and count is %d\n", i, count);
}
