#include <cs50.h>
#include <stdio.h>

int main(void){
    //get user to input two numbers
    int x = get_int("Enter a number ");
    int y = get_int("Enter another number ");
    //print the answer to adding the two numbers the user inputted
    printf("The answer is, %i\n", x + y);
}
