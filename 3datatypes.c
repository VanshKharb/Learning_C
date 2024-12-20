#include <stdio.h>
#include <stdbool.h>                     // this is for boolean expressions

int main()
{
    char a = 'C';                        //%c, single character
    char b[] = "Bro";                    //%s array of characters

    float c = 3.141592;                  //%f, 4 bytes (32 bits of precision) ~6-7 digits
    double d = 3.141592653588973;        //%lf, 8 bytes (64 bits of precision) ~15-16 digits

    bool e = true;                       // %d 1 byte (true or false), you have to add #include <stdbool.h> at the top, 1 corresponds to true and 0 to false

    char f = 100;                        // %d or %c, 1 byte (numbers from -128 to 127)
    unsigned char g = 255;               // %d or %c, unsigned disregards -ive values. 1 byte (0 to 255)

    short int h = 32767;                 // %d, 2 bytes (-32,768 to 32,767)
    unsigned short int i = 65535;        // %d, 2 bytes (0 to 65,535)
    /*rather than writing short int and unsigned short int, people usually just write short and usigned short*/

    int j = 2147483647;                  // %d, 4 bytes (-2,147,483,648 to 2,147,483,647) ~ (-2 billion, 2 billion)
    unsigned int k = 4294967295;         // %u, 4 bytes (0 to 4,294,967,295) ~ (0 to 4 billion)

    long long int l = 9223372036854775807; // %lld 8 bytes (-9 quintillion to 9 quintillion)
    unsigned long long int m = 18446744073709551615U; // %llu 8 bytes (0 to 18 quintillion), add "U" in the end to avoid warning


    /*if in anyone, you put the value more than the range of the data type, the output will just provide the minimum value possible*/



    printf("%f\n", c);                 //float
    printf("%.14lf\n", d);             //double
    printf("%d\n", e);                 //bool
    printf("%d\n", f);                 //char as numeric value, therefore char can be used to store integers, but the range is [-128, 127]
    printf("%c\n", f);                 //char as according to ASCII table
    printf("%d\n", g);                 // unsigned char as numeric value
    printf("%d\n", h);                 // short int
    printf("%d\n", i);                 // unsigned short int
    printf("%d\n", j);                 // int                
    printf("%u\n", k);                 // unsigned int
    printf("%lld\n", l);               // long long int
    printf("%llu\n", m);               // unsigned long long int
}