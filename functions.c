#include <stdio.h>
#include <stdlib.h>

int main ()
{
//collection of code that performs a specific task
    sayHi("Dunnieboy", 22);
    sayHi("Dunquins", 17);
    sayHi("GenG", 23);
    sayHi("Geestar", 18);
    return 0;
}

//creating a function
//using void means that we not going to return any info
//Naming a function with what it does
//calling the function in the main function above
void sayHi(char name [], int age){
    printf("Hello %s, you are %d years old\n", name, age); //note nothing is going to be displayed on the console window
    
}
