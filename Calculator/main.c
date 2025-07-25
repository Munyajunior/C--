#include <stdio.h>
#include <stdlib.h>

double addition(double a, double b){
        return a+b;
    }

double multiplication(double a,double b){
        return a*b;
        }
double division(double a,double b){
        return a/b;
        }
double substraction(double a,double b){
        return a-b;
        }
double get_values(double num1, double num2){
    printf("\nEnter first number");
    scanf("%lf",&num1);
    printf("\nEnter second Number");
    scanf("%lf", &num2);
    return num1, num2;
    }
int main()
{
    double num1;
    double num2;


    char operation;
    printf("Welcome to your basic calculator\n");
    printf("-----------------------------------");
    get_values(num1, num2);
    printf("\nChoose operation to perform [+,-,*,/]");
    scanf("%c", &operation);
    switch(operation){
    case (operation == "+"):
        printf(addition(num1, num2))
                }



    return 0;
}
