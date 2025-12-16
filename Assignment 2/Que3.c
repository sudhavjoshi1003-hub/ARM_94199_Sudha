#include<stdio.h>
int main()
{
    unsigned int reg =0xABCD;
    unsigned int mask=0x000F;
    unsigned int value = (reg>>0) & mask;
    printf("Lower 4 bit is 0x%02x \n",value);
    value = (reg>>4) & mask;
    printf("Upper 4 bit of lower byte is 0x%02x \n ",value);
    return 0;
}
