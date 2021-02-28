#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void)
{
    float change;
    //define change variable which will ask for input until input is above 0
    do
    {
        change = get_float("How much change is owed in $? \n");
    }
    while (change < 0);
    
    //change input to an integer and make any dollar inputs into cents
    int cents = round(change * 100);
    //define coins variable to work it out
    int coins;
    int n = 0;
    
    //for loop to see if you can add different coin values and if you can't then add the next lower coin value, split into 25c, 10c, 5c, 1c.
    for (coins = 0; coins < cents || coins + 1 <= cents; coins = coins + 25)
    {
        //for statement adds 25c and this if statement checks if 10c can be added
        if (coins + 25 > cents)
        {
            coins = coins + 10;
        }
        //if statement to check if 5c can be added because 25 and 10c can't be
        if (coins + 25 > cents || coins + 10 > cents)
        {
            coins = coins + 5;
        }
        //if statement to check if 1c can be added because 25, 10 and 5c can't be
        if (coins + 25 > cents || coins + 10 > cents || coins + 5 > cents)
        {
            coins = coins + 1;
        }
        n++;    
    }
    printf("%i\n", n);
}
