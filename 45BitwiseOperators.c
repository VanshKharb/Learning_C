#include <stdio.h>

int main()
{
/*  BITWISE OPERATORS: special operators used in bit level programming
                       (knowing binary is imp for this topic)

    & = AND
    | = OR
    ^ = XOR    (Exclusive OR)
    << = LEFT SHIFT
    >> = RIGHT SHIFT
*/ 

    int x = 6;  //  6 = 00000110 (in binary)
    int y = 12; // 12 = 00001100
    int z =0;   //  0 = 00000000

    z = x & y; 
    printf("AND = %d\n", z); // if both are 1, then 1, otherwise 0. Therefore, z becomes 00000100 which represnets 4

    z = x | y;
    printf("OR = %d\n", z);  // z = 00001110, which is the binary representation of the number 14

    z = x ^ y; // in XOR, you'll only get 1 when only one of the input is 1, if none or both are 1, then 0
    printf("XOR = %d\n", z); // z = 00001010, which is the binary representation of the number 14

    z = x << 1; // this is left shift, it will shift '1' bit to the left and the space which is vacant will be 0
                // and hence, it will form a new number
                // x = 00000110, left shift by 1: 0000110_, filling the vacant space by 0,
                // x = 00001100, which represents 12
    printf("SHIFT LEFT = %d\n", z); // SHIFT LEFT doubles the number

    z = y >> 2; // shift right halves the number, here it will get halved 2 times
    printf("SHIFT RIGHT = %d\n", z); // z = 00000001

    return 0; 
}