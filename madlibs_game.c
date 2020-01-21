#include <stdio.h>
#include <stdlib.h>

int main ()
{
//we going to create variables that are collections of character
    char color[20];
    char pluralNoun[20];
    char celebrityF[20]; //first name
    char celebrityL[20];// last name
//Here we going to prompt the user 
    printf("Enter a color: ");
    scanf("%s", color); //in strings we do not nee the & sign in the scanf
    printf("Enter a plural noun: ");
    scanf("%s", pluralNoun);
    printf("Enter a celebrity: ");
    scanf("%s %s", celebrityF, celebrityL);//here we use them both because it cannot print out both names 
    
    printf("Roses are %s\n", color);
    printf("%s are blue\n", pluralNoun);
    printf("I love %s %s\n", celebrityF, celebrityL);
    
    return 0;
} 
