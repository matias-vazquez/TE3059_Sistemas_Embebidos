#include<stdint.h>
#include<stdio.h>

void main(){
    uint32_t a = 0x22334455;
    uint8_t temp;
    uint8_t * ptr = (uint8_t *) &a;
    temp = * (ptr + 2);
    printf("Value of temp is %x\n", temp);
}
