#include <cs50.h>
#include <stdio.h>

int main(void){
    int x = get_int("x: ");
    int y = get_int("y: ");
    
    if(x < y){
        printf("%i is less then %i\n", x, y);
    } else if(x > y){
        printf("%i is greater then %i\n", x, y);
    }else{
        printf("%i is equal to %i\n", x, y);
    }
}
