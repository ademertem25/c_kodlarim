#include <stdio.h>


int main(void)
{
    double dval = 0;

    for (int i = 0; i < 10; ++i)
    {
        dval += .1;
    }
    if (dval == 1.)
        printf("dogru\n");
    else
        printf("yanlis\n");
    printf("dval = %fn",dval);

}