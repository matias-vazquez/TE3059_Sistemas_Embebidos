#include<stdint.h>
#include<stdio.h>

void main(){
    uint32_t * p = (uint32_t *) 1000;
    p = p + 3;
    printf(" %u ", p);
}


