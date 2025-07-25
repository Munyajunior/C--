#include <stdio.h>
#include <stdlib.h>

#define SIZE 3
int main()
{
    const int values[SIZE] = {1,3,4};
    int index;
    int highest = values[0];
    for(index=0;index<SIZE;index++)
    {
        if(values[index]>highest)
        {
            highest = values[index];
        }
    }
    printf("The highest value is %d",highest);

    return 0;
}
