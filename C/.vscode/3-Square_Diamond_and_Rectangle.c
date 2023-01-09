#include <stdio.h>
#include <math.h>

int main(void)
{
    int x1, y1, x2, y2, x3, y3, x4, y4;
    scanf("%d %d %d %d %d %d %d %d ", &x1, &y1, &x2, &y2, &x3, &y3, &x4, &y4);
    int a, b, c, d, Pab, Pbc, Pcd, Pda;
    a = sqrt(pow(x2-x1,2)+pow(y2-y1,2));
    b = sqrt(pow(x3-x2,2)+pow(y3-y2,2));
    c = sqrt(pow(x4-x3,2)+pow(y4-y3,2));
    d = sqrt(pow(x1-x4,2)+pow(y1-y4,2));
    Pab = (x2-x1) * (x3-x2) + (y2-y1) * (y3-y2);
    Pbc = (x3-x2) * (x4-x3) + (y3-y2) * (y4-y3);
    Pcd = (x4-x3) * (x1-x4) + (y4-y3) * (y1-y4);
    Pda = (x1-x4) * (x2-x1) + (y1-y4) * (y2-y1);
    if (a == b && b == c && c == d){
        if (Pab == Pbc && Pbc == Pcd && Pcd == Pda && Pab == 0){
            printf("Square");
        } else{
            printf("Diamond");
        }
    } else if (Pab == Pbc && Pbc == Pcd && Pcd == Pda && Pab == 0){
        printf("Rectangle");
    } else {
        printf("Others");
    }


    return 0;
}