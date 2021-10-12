#include<stdio.h>
#include<stdint.h>

typedef struct abc{
    uint32_t * a;
    uint8_t b;
    uint32_t c;
} ABC;

void main(){
    ABC * ptr = (ABC *) 1000;
    ptr = ptr + 2;
    //printf("Size of a is %d\n", sizeof(uint32_t *));
    //printf("Size of b is %d\n", sizeof(uint8_t));
    //printf("Size of c is %d\n", sizeof(uint32_t));
    //printf("Size of ptr is %d\n", sizeof(ptr));
    printf("Final value of ptr is %u\n", ptr);
}
