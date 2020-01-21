#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1;
    int num2;
    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);
    
    printf("Answer: %d\n", num1 + num2);
    /*The problem with the above code is that you cannot get an exact answer when using decimal*/
    
    double num3;
    double num4;
    printf("Enter the first number: ");
    scanf("%lf", &num3);
    printf("Enter the second number: ");
    scanf("%lf", &num4);
    
    printf("Answer: %f\n", num3 + num4);
    return 0;
}
