#include<stdio.h>
#include<stdint.h>

union ex_union {
	uint16_t bb;
	uint8_t b[2];
};

int main(){
	union ex_union var;
	var.bb = 0xAABB;
    var.b[0] = 0xCC;
	printf("\n %x", sizeof(var));
	printf("\n %x", var.bb);
	printf("\n %x", var.b[0]);
}
