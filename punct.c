#include<stdio.h>
#include <ctype.h>

int main(void){

    for(int i=1;i<120;i++){

       if(ispunct(i))
          printf("%c",i);
          
    }


}