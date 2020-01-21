#include <stdio.h>
#include <stdlib.h>
//return type
//creating a function
//They should be created above the main function that is calling it

double cube(double num){
    double result = num * num * num;
    return result; //The return key breaks us out of the function
}
int main()
{
    printf("Answer: %f\n", cube(3.0));
    return 0;
}
