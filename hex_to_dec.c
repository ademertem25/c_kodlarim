#include <stdio.h>
#include <ctype.h>


int main(void)
{
    int dec;
    int c;
    printf("Bir tamsayi girin\n");
    dec = 0;

    while ((c = getchar()) != '\n'){

        if (isdigit(c)){
            dec = dec*16 + c - '0';
        }
        else if (isxdigit(c)){
            c = toupper(c);
            dec = dec*16 + c -'A' + 10; 
        }
        printf("dec = %d\n",dec);
    }
    printf("dec = %d\n",dec);
}