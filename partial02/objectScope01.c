#include<stdint.h>
#include<stdio.h>

int32_t y = 1;

uint32_t main() {
    {
        uint32_t x = 10;
    }
    {
        printf("%d", x);
        printf("%d", y);
    }
    return 0;
}
