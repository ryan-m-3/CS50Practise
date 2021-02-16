#include <cs50.h>
#include <stdio.h>

int main(void)
{
    //in scratch we had a block for an if statement. We can do this in c
    //get two values to compare
    int x = get_int("input a number ");
    int y = get_int("input another number ");

    //beginning of if statement
    if (x > y)
    {
        printf("x is greater than y \n");
    }
    else if (x < y)
    {
        printf("y is greater than x \n");
    }
    else
    {
        printf("x is equal to y \n");
    }
}
