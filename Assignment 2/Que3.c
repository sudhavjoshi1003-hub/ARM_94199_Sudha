#include<stdio.h>
int main()
{
    unsigned int reg = 0xABCD;
    int min = 0;
    unsigned int value = ((reg >> min) & 0x000F);
    printf("Lower 4 bit is 0x%02x\n",value);
    min =4;
    value = ((reg >> min) & 0x000F);
    printf("Upper 4 bit of lower byte is 0x%02x\n",value);
    return 0;   
}
