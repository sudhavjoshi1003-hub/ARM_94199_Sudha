#include<stdio.h>
#define BV(n) (1<<n)
int main()
{
    unsigned char status=0x08;
    if(status & BV(3))
    printf("Bit 3 is SET");
    else 
    printf("Bit 3 is CLEAR");
    return 0;    
}
