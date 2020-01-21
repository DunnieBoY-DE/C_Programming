#include <stdio.h>
#include <stdlib.h>
#include <string.h>//this is optional and was not part of the code

struct Student
{
    char name[50];
    int age;
    char major[50];
    double gpa;
};
int main()
{
//student1 is a container that will store the info of the student when the input their info
    struct Student student1;
    student1.age = 22;
    student1.gpa = 3.2;
    strcpy(student1.name, "Dunnieboy");
    strcpy(student1.major, "Computer science"); 
    
    printf("Your name is %s, you have majored in %s, you are %d years old, Your gpa is %f\n", student1.name, student1.major, student1.age, student1.gpa);
    printf("\n");
    
    struct Student student2;
    student2.age = 18;
    student2.gpa = 3.0;
    strcpy(student2.name, "Geestar");
    strcpy(student2.major, "Programming");
    
    printf("Your name is %s, you have majored in %s, you are %d years old, Your gpa is %f\n", student2.name, student2.major, student2.age, student2.gpa);
    return 0;
}
