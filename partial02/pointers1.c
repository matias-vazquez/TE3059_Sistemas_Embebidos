#include<stdio.h>
#include<stdint.h>

void main(){
    uint8_t var = 10;
    uint8_t * pvar = &var;
    uint8_t temp;

    printf("The address pvar points to is %x\n", pvar);
    printf("The value stored at the address of pvar is %d\n", *pvar);
    temp = *pvar;
    printf("The value stored in temp variable is %d\n", temp);
}
