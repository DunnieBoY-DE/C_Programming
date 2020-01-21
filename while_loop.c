#include <stdio.h>
#include <stdlib.h>
//The while loop is used to loop over and continuouly executing a code till a certain condition is false
int main()
{
    int index = 1;
    while(index <= 10)//condition 
    {
        printf("%d\n", index);
        index = index + 1;//we can instead use index++
    } 
    printf(" There's a different code below\n");
//The Do while loops
    int a = 20;
    do 
    {
        printf("%d\n", a);
        a++;//we can instead a = a + 1
    }
    while(a <= 100);
    
    return 0;
}
