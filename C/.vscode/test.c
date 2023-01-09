#include <stdio.h>
#include <assert.h>

void countOdds(int low, int high)
{    
    int count=0, arraysize;
    int odd[arraysize];
    if (low%2==0){
        arraysize = (high-low)/2;
        for (int i=0; i<arraysize; i++)
            odd[i] = low+2*i+1;
            count++;
    }else{
        arraysize = (high-low)/2+1;
        for (int i=0; i<arraysize; i++)
            odd[i] = low+2*i;
            count++;
    }
    printf("%d\n", count);
    printf("The odd numbers between %d and %d are [ %d ]", low, high, odd);

    return;    
}

int main(void)
{
    int low, high;
    scanf("%d %d\n",low ,high);
    assert(0<=low && low<=high && high<=10^9);
    countOdds(low,high);
    
    return 0;
}