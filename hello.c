#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int answer = get_int("What's your name? ");
    printf("hello, %i\n", answer);
}

