#include<stdio.h>
#include<stdint.h>

void main(){
    uint8_t h = 10;
    uint8_t i = 5;
    uint8_t tmp;

    uint8_t *ph = &h;
    uint8_t *pi = &i;
    uint8_t *ptmp = &tmp;

    tmp = *pi;
    tmp = *ptmp + 1;
    i = *ph;
    h = *ptmp;
    printf("\n The value of i is %d", i);
    printf("\n The value of h is %d", h);
}
