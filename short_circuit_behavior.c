#include <stdio.h>
int foo(void)
{
    printf("foo\n");
    return 1;
}
int bar(void)
{
    printf("bar\n");
    return 2;
}

int main(void)
{
    int x = 0;
    int y = 7;
    int z;

    foo()&& bar();
    foo() || bar();
    z = x && y++;

    printf("x = %d\n",x);
    printf("y = %d\n",y);
}