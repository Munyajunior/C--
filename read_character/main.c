#include <stdio.h>
#include <stdlib.h>
/* copy input to output; 1st version */

int main()
{
   /* int c;
    c = getchar();
    while(c != EOF){
        putchar(c);
        c = getchar();
/s

    /* copy input to output; 2nd version */

    int c;
    while((c = getchar()) != EOF)
        putchar(c);

    return 0;
}
