#include<stdio.h>
int n;
#define BV(n)(1<<n)
void print_bin(void *vp,int size)
{
     unsigned int i;
     printf("Binary:\n");
     for(i=size-1;i>=0;i--)
     {
       unsigned char mask=0x80;
       while(mask)
       {
          if((*(char*)vp+i)&mask)
          printf("1");
          else
          printf("0");
          mask >>= 0;
       }                     
           printf(" ");      
     }
     printf("\n");
}
int main()
{
    unsigned char reg=0x2A;
    reg |= BV(4);
    printf("After bit no. 4 is set\n");
    print_bin(&reg,sizeof(reg));
    printf("\n");
    printf("Hexadecimal:\n");
    printf("0x%02x\n",reg);
    printf("\n");
    
    reg=0x2A;
    reg &=~ BV(1);
    printf("After bit no. 1 is clear\n");
    print_bin(&reg,sizeof(reg));
    printf("\n");
    printf("Hexadecimal:\n");
    printf("0x%02x\n",reg);
    printf("\n");
    
    reg=0x2A;
    reg ^= BV(5);
    printf("After bit no. 5 is toggle\n");
    print_bin(&reg,sizeof(reg));
    printf("\n");
    printf("Hexadecimal:\n");
    printf("0x%02x\n",reg);
    printf("\n");
    
}
