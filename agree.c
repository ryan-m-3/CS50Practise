#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // asks the question to the user, do they agree
    char agree = get_char("Do you agree? ");
   //uses if statement to check if user had put either Y or y and if so what to print
    if (agree == 'y' || agree == 'Y')
    {
        printf("You have agreed. \n");
    }
    //uses else if statement to check if user had put either N or n and if so what to print
    else if (agree == 'n' || agree == 'N')
    {
        printf("You have not agreed. \n");
    }
}
