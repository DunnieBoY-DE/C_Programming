#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    printf("%f\n", 8.78);
    printf("%f\n", 4.5 * 9.7);//%f working with only a floating point number
    //working with variables
    int num = 76;
    printf("%d\n", num);
    //Working with functions
    printf("%f\n", pow(2, 3));//we use math.h to insert some of complex math functions
    printf("%f\n", sqrt(1024));
    printf("%f\n", ceil(36.758));//we use ceil to find the next highest number
    printf("%f\n", floor(36.758));// we use floor to do the opposite of ceil
return 0;
}
