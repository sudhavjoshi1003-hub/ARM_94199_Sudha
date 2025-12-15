#include <stdio.h>
int main()
{
    char x[8];
    int i,count=0;
    printf("Enter a byte : ");
    scanf("%s",x);
    for(i=0;i<8;i++)
    {
       if(x[i]=='1')
       count++;                       
    }    
    printf("count is %d \n",count);
    if(count%2==0)
    printf("parity is even");
    else
    {
        printf("parity is odd");
        i=0;
        if(x[i]==0)
        x[i]='1';
        else
        x[i]='0';
        printf("\n1 is added to MSB");
        printf("\n");
        for(i=0;x[i]!='\0';i++)
        printf("%c",x[i]);
    }
}
