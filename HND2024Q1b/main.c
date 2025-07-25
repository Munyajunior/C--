#include <stdio.h>
#include <stdlib.h>

#define SIZE 5
int main()
{
    const char*names[SIZE] = {"Meg","Janai","Sonat","Belle","Molak"};
    for(int index=0;index<SIZE;index++)
    {
        printf("%s\n",names[index]);
    }
    return 0;
}
