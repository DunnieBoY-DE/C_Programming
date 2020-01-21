#include <stdio.h>
#include <stdlib.h>

int main()
{
/*constants are special types of variables/value that cannot be modified*/
    int num = 5;
    printf("%d\n", num);
    num = 8;
    printf("%d\n", num);
//creating values that cannot be modified by using const
    const int num1 = 10;
    printf("%d\n", num1);
/*    num1 = 22;
    printf("%d\n", num1);*/ //if you proceed with code line 14 and 15 there will be an error because you are trying to modify the variable/value
    return 0;
}
