#include <stdio.h>
#include <stdlib.h>
//how computers store programs and where they are store
int main()
{
    int age = 30;
    double gpa = 3.4;
    char grade = 'A';
    
    printf("age: %p\ngpa: %p\ngrade: %p", &age, gpa, grade);//%p are pointer
    return 0;
}
