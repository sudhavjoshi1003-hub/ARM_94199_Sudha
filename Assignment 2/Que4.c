#include<stdio.h>
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
    unsigned int value = 5;
    value = value << 2;
    printf("Value after left shift by 2 :\n");
    print_bin(&value,sizeof(value));
    value = 5;
    value = value >> 1;
    printf("Value after right shift by 1 :\n");
    print_bin(&value,sizeof(value));
    return 0;
    
}
