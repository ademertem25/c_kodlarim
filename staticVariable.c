#include<stdio.h>

int a = 0;

void foo(void){

   static int a = 10;
   ++a;
   printf("a value = %d\n", a);
}

int main(void)
{
    foo();
    foo();
    foo();
    foo();
    printf("a value = %d\n", a);
}