#include <stdio.h>
int main() 
{
    char z;
    printf("Enter a character : ");
    scanf("%c",&z);
    if((z>='A' && z<='Z') || (z>='a' && z<='z'))
    {
              printf("character is alphabet\n");
              int w=z^32;
              printf("The XOR value is %d",w);
    }    
    else
    printf("character is not alphabet");
}
