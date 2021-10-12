volatile unsigned char a, b;

int main(void){
    a = 149;
    a = 43;
    a = 38;

    if (a > 1){
        b = a;
    }
    else {
        b = 0;
    }
    a = a + 1;
    while(1){
    }
return(0);
}
