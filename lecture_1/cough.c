#include <cs50.h>
#include <stdio.h>

void cough(int n);

int main(void){
    int num = get_int("num: ");
    cough(num);
}

void cough(int n){
    for(int i=0; i < n; i++){
        printf("cough\n");
    }
}
