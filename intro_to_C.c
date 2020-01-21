#include <stdio.h>
#include <stdlib.h>

//Getting started with C programming
int main()
{
    printf("Hello world!\n");/* The semi-colon shows the instruction has ended to be executed*/
    printf("     /|\n");
    printf("    / |\n");
    printf("   /  |\n");
    printf("  /___|\n");
//Getting started with variable
//%s means insertion of a string
//%d means insertion of an integer

    char characterName[] = "Geestar"; //you can change the characters name here
    int CharacterAge = 18; // you can also modify the age
    printf("There once named a woman named %s\n", characterName); //%sThis is telling C that we want to insert a collection of string
    printf("She was %d years old.\n", CharacterAge); //%d means we want to insert an integer
    printf("She really loved the name %s\n", characterName);
    printf("but did not like being %d.\n", CharacterAge);
    return 0;
}
