#include<stdint.h>
#include<stdio.h>

void main(){
    uint32_t a = 0x22334455;
    uint8_t temp;
    temp = ((uint8_t *) &a)[2];
    printf("Value of temp is %x\n", temp);
}
