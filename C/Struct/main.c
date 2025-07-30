#include <stdio.h>
#include <stdlib.h>


struct Student{
    char name[50];
    char major[50];
    int age;
    double gpa;
};

int main()
{
    struct Student student1;
    student1.age = 24;
    student1.gpa = 3.3;
    strcpy(student1.name, "khalid");
    strcpy(student1.major, "CS");


    struct Student student2;
    student2.age = 24;
    student2.gpa = 3.3;
    strcpy(student2.name, "khalid");
    strcpy(student2.major, "Software Engineering");

    printf("%f\n", student1.gpa);
    printf("%s", student2.name);
    return 0;
}
