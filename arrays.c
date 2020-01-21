#include <stdio.h>
#include <stdlib.h>

int main()
{
//Arrays are used to store bunch of data values
//creating an array
    int luckyNumbers[] = {1, 2, 8, 15, 16, 23, 42};
    printf("%d\n", luckyNumbers[3]);//we can access an array using their index values[]
    //modifying the values in the array
    luckyNumbers[1] = 200;
    printf("%d\n", luckyNumbers[1]); 
    int luckynumbers[10];
    luckynumbers[0] = 90;
    luckynumbers[1] = 200;
    printf("%d\n", luckynumbers[0]);
    printf("%d\n", luckynumbers[1]);
    
//2D Arrays 
    int nums[3][2] = {  
                    {1, 2},
                    {3, 4},
                    {5, 6}
                   };
    printf("%d", nums[1][1]);//Acessing the arrays
//Nested for loop
    int k, l;
    for(k = 0; k <3; k++)
    {
        for(l = 0; l < 2; l++)
        {
            printf("%d,", nums[k][l]);
        }
        printf("\n");  
    }
    return 0;
}
