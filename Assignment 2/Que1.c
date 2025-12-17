#include<stdio.h>
#define BV(n) (1<<n)
void print_bin(void *vp, int size)
{
     int i;
     for(i=size-1;i>=0;i--)
     {
                           unsigned char mask=0x80;
                           while(mask)
                           {
                                      if (((*(char*)vp)+i)&mask) 
                                      printf("1");
                                      else
                                      printf("0");
                                      mask>>=1;         
                           }                   
                           printf(" ");   
     }     
     printf("\n");
}
int main()
{
    unsigned char reg = 0x2A;
    reg |= BV(4);
    printf("After bit no. 4 is set \n");
    printf("Binary:\n");
    print_bin(&reg,sizeof(reg));
    printf("Hexadecimal:\n");
    printf("0x%02x \n",reg);
    
    reg = 0x2A;
    reg &=~ BV(1);
    printf("After bit no. 1 is clear \n");
    printf("Binary:\n");
    print_bin(&reg,sizeof(reg));
    printf("Hexadecimal:\n");
    printf("0x%02x \n",reg);
    
    reg = 0x2A;
    reg ^= BV(5);
    printf("After bit no. 5 is toggle \n");
    printf("Binary:\n");
    print_bin(&reg,sizeof(reg));
    printf("Hexadecimal:\n");
    printf("0x%02x",reg);
    return 0;
        
}
