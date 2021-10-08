#include<stdio.h>
#include<stdint.h>

void main(){
    uint8_t h = 10;
    uint8_t i = 5;
    uint8_t tmp;

    tmp = i;
    tmp = tmp + 1;

    i = h;
    h = tmp;

    printf("\n The value of i is: %d", i);
    printf("\n The value of h is: %d", h);
}
