#include<stdio.h>
#include<stdlib.h>
#include<stdint.h>

void main(){
    union{
        float u_f;
        uint32_t u_i;
    } var;
    printf("Size of var is %d\n", sizeof(var));
    var.u_f = 23.5;
    printf("Value is %f\n", var.u_f);
    var.u_i = 5;
    printf("Value is %d\n", var.u_i);
    exit(EXIT_SUCCESS);
}
