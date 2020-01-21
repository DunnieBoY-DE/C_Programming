#include <stdio.h>
#include <stdlib.h>

int main()
{
    int j = 1;
    while(j <= 5)
    {
        printf("%d\n", j);
        j++;
    }
//The above while loop can be compressed to for loop below
    int i;
    for(i = 1; i < + 5; i++) 
    {
        printf("%d\n", i);
    }
    return 0;
}
