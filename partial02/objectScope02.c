#include<stdio.h>

void main(){
    int datum = 1;
    printf("datum=%d\n", datum);

    if (datum == 1){
        int datum = 2;
        printf("datum=%d\n",datum);
    }
    printf("datum=%d\n", datum);
}
