#include<stdio.h>
#include<stdint.h>

void main(){
    uint32_t *porigen, *pdest;
    //uint8_t *pv;
    porigen = (uint32_t*) 0x00000818;
    pdest   = (uint32_t*) 0x0000080C;
    printf("%x\n", porigen);
    printf("%x\n", pdest);
    //printf("%x\n", sizeof(pv));
}
