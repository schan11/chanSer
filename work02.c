// Serena Chan
// Systems Level Programming
// 09/28/2020
// Work 02: Variables are the Spice of Life

#include <stdio.h>

int main(){
    
    // first step: testing variables, types, and printf
    
    char a = 'a';
    short b = 500;
    int c = 17;
    double d = 12345.67;
    long e = 123456;
    float f = 654321;
    
    printf("char: %c\n", a);
    printf("short: %hi\n", b);
    printf("int: %i\n", c);
    printf("double: %lf\n", d);
    printf("long: %ld\n", e);
    printf("float: %f\n", f);
    
    // testing unsigned types
    
    unsigned int uc = 1717;
    unsigned char ua = 10;
    
    printf("unsigned int: %u\n", uc);
    printf("unsigned char: %d\n", ua);
    
    // what happens if we go out of bounds?
    
    char out = -129;
    short out1 = 32768;
    unsigned short out2 = -1;
    
    // warning after compilation: implicit conversion
    printf("out of bounds char: %c\n", out); // prints nothing
    printf("out of bounds short: %hi\n", out1); // prints -32768
    printf("out of bounds unsigned short: %d\n", out2); // prints 65535
    
    return 0;
    

   
}
    




