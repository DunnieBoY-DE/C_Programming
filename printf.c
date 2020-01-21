#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Dee\nXperts\n");//\n is used to make a new line
    printf("My favorite number is %d\n", 8);// printing a format specifier
    printf("My favorite %s is %d\n", "Number", 8);//%s is used to insert a string and %d is used to insert an integer.
    printf("My Favourite number is %f\n", 8.0);//%f is used to print a decimal number
    int favNum = 80;//We can as well create a variable and access it using the format specifier
    printf("My Favorite %s is %d\n", "Number", favNum);
    int favYear = 1998;
    printf("%s is %d\n", "My Favorite year is", favYear);
    char myChar = 'D';
    printf("My favorite letter is %c\n", myChar);//%c is used to show a single character
    return 0;
}
