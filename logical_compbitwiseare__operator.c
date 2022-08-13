#include <stdio.h>


/*
10 and 20
*/

int main(void)
{
    int x, y;
    printf("iki tam sayi girin\n");
    scanf("%d,%d",&x,&y);
    
    if(x&&y)
        printf("logical True\n");
    else
        printf("logical False\n");
    if(x&y)
        printf("Bitwise True\n");
    else
        printf("Bitwise False\n");

    
    


}