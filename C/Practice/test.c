#include <stdio.h>
#include <assert.h>

void countOdds(int low, int high)
{    
    int arraysize = (high-low)/2;
    int odd[arraysize];
    if (low%2==0)
        for (int i=0; i<arraysize; i++)
            odd[i] = low+2*i+1;
    else
        for (int i=0; i<=arraysize; i++)
            odd[i] = low+2*i;
    printf("%d\n", arraysize);
    for (int i=0; i<arraysize; i++)
    printf("The odd numbers between %d and %d are [ %d ]", low, high, odd[i]);

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