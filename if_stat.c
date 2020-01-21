#include <stdio.h>
#include <stdlib.h>
/*Creating a function to determine the maximum number*/
//&& if used to check 2 conditions are true
//|| if or is used means that one of the condition is true

int max(int num1, int num2, int num3){
    int result;
    if(num1 >= num2 && num1 >= num3 ) 
    {
        result = num1;
    }
    else if(num2 >= num1 && num2 >= num3)
    {
        result = num2;
    }
    else
    {
        result = num3;
    }
    return result;
}
int main()
{
    printf("%d\n", max(4, 10, 17));
    printf("\n");
//using or to check condition
    if(3 < 2 || 2 > 5)
    {
        printf("True\n");
    }
    else
    {
        printf("False\n");
    }
    if(3 == 2)
    {
        printf("True\n");
    }
    else
    {
        printf("False\n");
    }
    if(3 != 2)//this means is not
    {
        printf("True\n");
    }
    else
    {
        printf("False\n");
    }
    if(!(3 < 2)) //we use the exclamation sign when we want to negate something
    {
        printf("True\n");
    }
    else
    {
        printf("False\n");
    }
    return 0;
}
