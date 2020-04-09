#include <cs50.h>
#include <stdio.h>

int main(void){
    float price  = get_float("what's the price?\nUS$ ");
    printf("you are have R$ %.2f.\n", price*5.08);
}
