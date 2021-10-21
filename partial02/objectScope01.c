#include<stdint.h>
#include<stdio.h>

int32_t y = 1;

uint32_t main() {
    {
        uint32_t x = 10;
        printf("%d\n", x);
        printf("%d\n", y);
    }
    return 0;
}
