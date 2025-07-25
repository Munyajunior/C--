#include <stdio.h>
#include <stdlib.h>

/* Print Fahrenheit-Celsius table
    for fahr = 0, 20, ...., 300; floating-point version*/

int main()
{

    //float fahr, celsius;
    //float lower, upper, step;

    //lower = 0; /* lower limit of temperature*/
    //upper = 300; /* upper limit*/
    //step = 20; /* step size */
    #define LOWER 0 /* Lower limit of table*/
    #define UPPER 300 /* upper limit */
    #define STEP 20/* step size */

    int fahr;

    /*while (fahr <= upper){
        celsius = (5.0/9.0) * (fahr-32.0);
        printf("%3.0f %6.1f\n", fahr, celsius);
        fahr = fahr + step;
    }*/
    /*for(fahr = LOWER; fahr<=UPPER; fahr = fahr + STEP)
        printf("%3d %6.1f\n", fahr, (5.0/9.0)*(fahr-32));
    */
    /*Reverse conversion from 300 to 0*/

    for(fahr = UPPER; fahr >=LOWER; fahr = fahr - STEP)
    {
        printf("%3d %6.1f\n", fahr, (5.0/9.0)*(fahr-30));
    }



    return 0;
}
