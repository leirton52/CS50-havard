#include <cs50.h>
#include <stdio.h>

int main(void){
    char c = get_char("Do you agree? ");

    if (c == 'Y' || c == 'y'){
        printf("agreed.\n");
    }else if(c == 'N' || c == 'n'){
        printf("Not agree.\n");
    }else{
        printf("input invalid\n");
    }
}
