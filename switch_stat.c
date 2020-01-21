#include <stdio.h>
#include <stdlib.h>
//comparison of one value with a bunch of other value
//creating a grade response
int main()
{
    char grade;
    printf("Enter your grade: ");
    scanf(" %c", &grade);
    
    switch(grade)
    {
        case 'A' :
            printf("You did great! \n");
            break; // break statements tells the switch statement to leave
        case 'B' :
            printf("You did alright! \n");
            break;
        case 'C' :
            printf("You did poorly! \n");
            break;
        case 'D' :
            printf("You did very bad! \n");
            break;
        case 'F' :
            printf("You Failed, TERRIBLY! \n");
            break;
        default :
            printf("Invalid grade\n");
    }
    return 0;
}
