#include <cs50.h>
#include <stdio.h>

int main(void){
 //in scratch we had a block to create a counter and then change that counter by one. The code below does this.
    int counter = 1;
    counter = counter + 1;
    //the above is a bit long to print out, we can make it shorter by writing the following
    counter+=1;
    //this is shorter but there is an even easier way to do this
    counter++;
    printf("%i\n", counter);
    
}
