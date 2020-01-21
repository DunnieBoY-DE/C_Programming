#include <stdio.h>
#include <stdlib.h>

int main()
{
//prompting the user
    int age;
    printf("Enter your age: ");
    scanf("%d", &age);// Allows the user to enter some info & >is a pointer and must be used when scanf is used
    printf("You are %d years old\n", age);
    
    double gpa;
    printf("Enter your gpa: ");
    scanf("%lf", &gpa);
    printf("Your gpa is %f\n", gpa);
    
    char grade;
    printf("Enter your Grade: ");
    scanf("%c", &grade);
    printf("Your Grade is %c\n", grade);
    //getting string of characters
    char name [20];
    printf("Enter your name: ");
    fgets(name,20, stdin);//fgets prints the whole line of input from the user
    //scanf("%s", name);// scanf prints just a string if there is space between then it wont be printed
    printf("Your name is %s\n", name);
    
    return 0;
}
