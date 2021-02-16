#include <cs50.h>
#include <stdio.h>

int main(void){
    int x = get_int("input a number ");
    int y = get_int("input another number ");
    //incorrect data type
    float z = x/y;

    //correct data type, the (float) tells computer to convert values
    float g = (float) x / (float) y;

    printf("%f\n", g);
}
